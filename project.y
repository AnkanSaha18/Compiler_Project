%{
    #include<stdio.h>
    #include<string.h>
    #include<math.h>
    void yyerror(char *s);
    extern int yylex();
    extern int yyparse();

    struct symbol_table_structure{
        char *name;
        char *data_type;
        int int_value;
        double double_value;
        char char_value;
    };
    struct symbol_table_structure symbol_table[1000];
    int symbol_table_index = 0;
    int switch_value = 0;
    int switch_check = 0;


    int find_symbol_table_index(char *var)
    {
        for (int i = 0; i < symbol_table_index; i++) {
            if (strcmp(symbol_table[i].name, var) == 0) return i;
        }
        return symbol_table_index;
    }

    void assignment(char *name, char *type, int int_value, double double_value, char char_value)
    {
        int i = find_symbol_table_index(name);
        symbol_table[i].name = name;
        symbol_table[i].data_type = type;
        symbol_table[i].int_value = int_value;
        symbol_table[i].double_value = double_value;
        symbol_table[i].char_value = char_value;
        if (i == symbol_table_index) 
        {
            symbol_table_index++;
        }
        printf("%s %d value is: %d\t",type, i, symbol_table[i].int_value);
    }

    int gcd(int x, int y)
    {
        if (y == 0)   //recursion termination condition
        {
            return x;
        }
        else 
        {
            return gcd(y, x % y);   //calls itself
        }
    }

%}


%union{
    char text[1000];
    struct datatype {
        char* name;
        char* data_type;
        int int_value;
        double double_value;
        char char_value;
    }union_variable;
}




%token INT CHAR VOID DOUBLE
%token DOUBLE_VALUE INTEGER_VALUE CHAR_VALUE VARIABLE_NAME
%token ASSIGN 
%token PLUS MINUS MULTIPLE DIVISION MOD BINARY_OR BINARY_AND POW
%token EQUAL NOT_EQUAL GREATER_THAN LESS_THAN GREATER_THAN_AND_EQUAL LESS_THAN_AND_EQUAL 
%token AND OR
%token INC_ONE DEC_ONE
%token TRUE FALSE
%token FIRST_BRACKET_OPEN FIRST_BRACKET_CLOSE SECOND_BRACKET_OPEN SECOND_BRACKET_CLOSE THIRD_BRACKET_OPEN THIRD_BRACKET_CLOSE SEMICOLON COMMA
%token IF ELSE_IF ELSE SWITCH CASE FOR WHILE CONTINUE BREAK 
%token PRINTF SCANF SIZE_OF RETURN 
%token OUTPUTTEXT LIBRARY
%nonassoc GCD LCM
%start program

%type<union_variable> VARIABLE_NAME INTEGER_VALUE DOUBLE_VALUE CHAR_VALUE assign_value OUTPUTTEXT LIBRARY

%%
program: 
        |program statement  
        ;			   

statement:
        declaration
        | expressions
        | print
        | scan
        | while
        | for
        | if
        | library
        | function
        | function_call
        | switch
        | case
        | gcd
        | lcm
        ;

library: LIBRARY                            { printf("%s is included.\n", $1.name);}



function:
    TYPE VARIABLE_NAME FIRST_BRACKET_OPEN params FIRST_BRACKET_CLOSE SECOND_BRACKET_OPEN statement ret SECOND_BRACKET_CLOSE {
                                                                                                                            printf("User defined function.\n");
                                                                                                                        }
    ;

params:
    params COMMA declaration_for_function
    |declaration_for_function {printf("Function declared\n");}
    ;

declaration_for_function: 
                        |TYPE expression
                        ;

function_call:
    VARIABLE_NAME FIRST_BRACKET_OPEN expressions FIRST_BRACKET_CLOSE 
    |VARIABLE_NAME FIRST_BRACKET_OPEN FIRST_BRACKET_CLOSE
    ;

ret: RETURN VARIABLE_NAME


declaration:
        TYPE expressions
        ;

TYPE :
    INT
    | DOUBLE
    | CHAR
    | VOID
    ;

expressions :
        expressions COMMA expression
        | expression
        ; 

expression:
        VARIABLE_NAME ASSIGN assign_value       {assignment($1.name, $3.data_type, $3.int_value, $3.double_value, $3.char_value);}
        | INC_ONE FIRST_BRACKET_OPEN VARIABLE_NAME FIRST_BRACKET_CLOSE      {
                                                                                int i = find_symbol_table_index($3.name);
                                                                                if (i != symbol_table_index) {
                                                                                    symbol_table[i].int_value = symbol_table[i].int_value + 1;
                                                                                }
                                                                            }
        | DEC_ONE FIRST_BRACKET_OPEN VARIABLE_NAME FIRST_BRACKET_CLOSE      {
                                                                                int i = find_symbol_table_index($3.name);
                                                                                if (i != symbol_table_index) {
                                                                                    symbol_table[i].int_value = symbol_table[i].int_value - 1;
                                                                                }
                                                                            }
        ;


assign_value: INTEGER_VALUE                     {$$.data_type=$1.data_type; $$.int_value=$1.int_value; $$.double_value=$1.double_value; $$.char_value=$1.char_value;}
            | DOUBLE_VALUE                      {$$.data_type=$1.data_type; $$.int_value=$1.int_value; $$.double_value=$1.double_value; $$.char_value=$1.char_value;}
            | CHAR_VALUE                        {$$.data_type=$1.data_type; $$.int_value=$1.int_value; $$.double_value=$1.double_value; $$.char_value=$1.char_value;}
            | VARIABLE_NAME                     {
                                                    for (int i = 0; i < symbol_table_index; i++) 
                                                    {
                                                        if(strcmp($1.name, symbol_table[i].name)==0)
                                                        {
                                                            $$.int_value = symbol_table[i].int_value, $$.double_value = symbol_table[i].double_value, $$.data_type = symbol_table[i].data_type;
                                                            break;
                                                        }
                                                    }
                                                }  
            | assign_value AND assign_value     {
                                                    if (strcmp($1.data_type, "int")==0) 
                                                    {
                                                        $$.int_value = ($1.int_value && $3.int_value);
                                                        $$.data_type = $1.data_type;
                                                    }
                                                }
            | assign_value OR assign_value      {
                                                    if (strcmp($1.data_type, "int")==0) 
                                                    {
                                                        $$.int_value = ($1.int_value || $3.int_value);
                                                        $$.data_type = $1.data_type;
                                                    }
                                                }
            | assign_value LESS_THAN assign_value     {
                                                    if (strcmp($1.data_type, "int")==0) 
                                                    {
                                                        $$.int_value = ($1.int_value < $3.int_value);
                                                        $$.data_type = $1.data_type;
                                                    }
                                                }
            | assign_value GREATER_THAN assign_value    {
                                                            if (strcmp($1.data_type, "int")==0) 
                                                            {
                                                                $$.int_value = ($1.int_value > $3.int_value);
                                                                $$.data_type = $1.data_type;
                                                            }
                                                        }
            | assign_value LESS_THAN_AND_EQUAL assign_value     {
                                                                    if (strcmp($1.data_type, "int")==0) 
                                                                    {
                                                                        $$.int_value = ($1.int_value <= $3.int_value);
                                                                        $$.data_type = $1.data_type;
                                                                    }
                                                                }
            | assign_value GREATER_THAN_AND_EQUAL assign_value  {
                                                                    if (strcmp($1.data_type, "int")==0) 
                                                                    {
                                                                        $$.int_value = ($1.int_value >= $3.int_value);
                                                                        $$.data_type = $1.data_type;
                                                                    }
                                                                }
            | assign_value EQUAL assign_value                   {
                                                                    if (strcmp($1.data_type, "int")==0) 
                                                                    {
                                                                        $$.int_value = ($1.int_value == $3.int_value);
                                                                        $$.data_type = $1.data_type;
                                                                    }
                                                                }
            | assign_value NOT_EQUAL assign_value               {
                                                                    if (strcmp($1.data_type, "int")==0) 
                                                                    {
                                                                        $$.int_value = ($1.int_value != $3.int_value);
                                                                        $$.data_type = $1.data_type;
                                                                    }
                                                                }

            | assign_value PLUS assign_value        { $$.data_type = $1.data_type,  $$.int_value = $1.int_value + $3.int_value, $$.double_value = $1.double_value + $3.double_value, $$.char_value = $1.char_value + $1.char_value;}
            | assign_value MINUS assign_value       { $$.data_type = $1.data_type,  $$.int_value = $1.int_value - $3.int_value, $$.double_value = $1.double_value - $3.double_value, $$.char_value = $1.char_value - $1.char_value;}
            | assign_value BINARY_AND assign_value  { $$.data_type = $1.data_type,  $$.int_value = $1.int_value & $3.int_value;} 
            | assign_value BINARY_OR assign_value   { $$.data_type = $1.data_type,  $$.int_value = $1.int_value | $3.int_value;} 
            | assign_value MULTIPLE assign_value    { $$.data_type = $1.data_type,  $$.int_value = $1.int_value * $3.int_value, $$.double_value = $1.double_value * $3.double_value, $$.char_value = $1.char_value * $1.char_value;}
            | assign_value DIVISION assign_value    { $$.data_type = $1.data_type,  $$.int_value = $1.int_value / $3.int_value, $$.double_value = $1.double_value / $3.double_value, $$.char_value = $1.char_value / $1.char_value;} 
            | assign_value MOD assign_value         { $$.data_type = $1.data_type,  $$.int_value = $1.int_value % $3.int_value;}
            | assign_value POW assign_value         { $$.data_type = $1.data_type,  $$.int_value = pow($1.int_value, $3.int_value), $$.double_value = pow($1.double_value, $3.double_value), $$.char_value = pow($1.char_value, $1.char_value);}
            | FIRST_BRACKET_OPEN assign_value FIRST_BRACKET_CLOSE                                         
            ;


print: 
    PRINTF FIRST_BRACKET_OPEN assign_value FIRST_BRACKET_CLOSE   {
                                                                        if (strcmp($3.data_type, "int") == 0)
                                                                            printf("%d\n", $3.int_value);
                                                                        else if (strcmp($3.data_type, "double") == 0)
                                                                            printf("%lf\n", $3.double_value);
                                                                        else if(strcmp($3.data_type, "char") == 0)
                                                                            printf("%c\n", $3.char_value);
                                                                    }
    | PRINTF FIRST_BRACKET_OPEN OUTPUTTEXT FIRST_BRACKET_CLOSE   { printf("%s\n", $3.name);}
    ;

scan:
    SCANF FIRST_BRACKET_OPEN VARIABLE_NAME FIRST_BRACKET_CLOSE  {
                                                                    int i = find_symbol_table_index($3.name);
                                                                    if (i != symbol_table_index) {
                                                                        printf("Enter value for %s := ", symbol_table[i].name);
                                                                        if (strcmp(symbol_table[i].data_type, "int") == 0) {
                                                                            scanf("%d", &symbol_table[i].int_value);
                                                                        }
                                                                        else if (strcmp(symbol_table[i].data_type, "double") == 0) {
                                                                            scanf("%lf", &symbol_table[i].double_value);
                                                                        }
                                                                        else if (strcmp(symbol_table[i].data_type, "char") == 0){
                                                                            scanf("%c", &symbol_table[i].char_value);
                                                                        }
                                                                    }
                                                                    else {
                                                                        printf("Variable not declared\n");
                                                                    }
                                                                }


while: WHILE FIRST_BRACKET_OPEN assign_value  FIRST_BRACKET_CLOSE SECOND_BRACKET_OPEN statement SECOND_BRACKET_CLOSE    {
                                                                                                                            if($3.int_value)
                                                                                                                            {
                                                                                                                                printf("while loop is running");
                                                                                                                            }
                                                                                                                        }
for: FOR FIRST_BRACKET_OPEN expression SEMICOLON assign_value SEMICOLON expression FIRST_BRACKET_CLOSE SECOND_BRACKET_OPEN statement SECOND_BRACKET_CLOSE   {
                                                                                                                                                                if($5.int_value)
                                                                                                                                                                {
                                                                                                                                                                    printf("for loop running");
                                                                                                                                                                }
                                                                                                                                                            }
if: IF FIRST_BRACKET_OPEN assign_value FIRST_BRACKET_CLOSE SECOND_BRACKET_OPEN statement SECOND_BRACKET_CLOSE   {
                                                                                                                    if($3.int_value)
                                                                                                                    {
                                                                                                                        printf("If statement will be executed.\n");
                                                                                                                    }
                                                                                                                }
    | IF FIRST_BRACKET_OPEN assign_value FIRST_BRACKET_CLOSE SECOND_BRACKET_OPEN statement SECOND_BRACKET_CLOSE ELSE SECOND_BRACKET_OPEN statement SECOND_BRACKET_CLOSE {
                                                                                                                                                                            if($3.int_value)
                                                                                                                                                                            {
                                                                                                                                                                                printf("If statement will be executed.\n");
                                                                                                                                                                            }
                                                                                                                                                                            else
                                                                                                                                                                            {
                                                                                                                                                                                printf("Else statement will be executed.\n");
                                                                                                                                                                            }
                                                                                                                                                                        }


switch:
    SWITCH FIRST_BRACKET_OPEN assign_value FIRST_BRACKET_CLOSE {
        switch_value = $3.ival;
        switch_check = 0;
        printf("switch statement.\n");
    }
    ;

case:
    cases
    {
        if(check == 0)
        {
            printf("default\n");
        }
    }
    ;

cases: 
    CASE assignval COLON LBRA statement RBRA cases{
        if(sw==$2.ival)
        {
            printf("%d\n",$2.ival);
            check = 1;
        }

    }
    |CASE assignval COLON LBRA statement RBRA default_function {
        
        if(sw==$2.ival)
        {
            printf("%d\n",$2.ival);
            check = 1;
        }
    }
    ;


gcd: GCD FIRST_BRACKET_OPEN assign_value COMMA assign_value FIRST_BRACKET_CLOSE       {
                                                                                            printf("%d %d GCD is %d\n",$3.int_value, $5.int_value, gcd($3.int_value, $5.int_value));
                                                                                        }
lcm: LCM FIRST_BRACKET_OPEN assign_value COMMA assign_value FIRST_BRACKET_CLOSE       {
                                                                                            printf("%d %d LCM is %d\n",$3.int_value, $5.int_value, $3.int_value * $5.int_value / gcd($3.int_value, $5.int_value));
                                                                                        }       
%%










void yyerror(char *s) 
{
    fprintf(stderr, "%s\n", s);
}


int main(void) 
{
    yyparse();
}
