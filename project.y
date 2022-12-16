%{
    #include <stdio.h> 
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
%}


%union{
    char text[1000];
    struct datatype {
        int type;
        char* str_value;
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
%token INC_ONE DEC_ONE
%token AND OR NOT
%token TRUE FALSE
%token FIRST_BRACKET_OPEN FIRST_BRACKET_CLOSE SECOND_BRACKET_OPEN SECOND_BRACKET_CLOSE THIRD_BRACKET_OPEN THIRD_BRACKET_CLOSE SEMICOLON COMMA
%token IF ELSE_IF ELSE SWITCH CASE FOR WHILE CONTINUE BREAK 
%token PRINTF SCANF SIZE_OF RETURN 

%start program

%type<union_variable> VARIABLE_NAME INTEGER_VALUE DOUBLE_VALUE CHAR_VALUE

%%
program: 
        |program statement  
        ;			   

statement:
        |declaration
        ;

declaration:
        TYPE expressions
        ;

TYPE :
    INT
    | DOUBLE
    | CHAR
    ;

expressions :
        expressions COMMA expression
        | expression
        ; 

expression:
        VARIABLE_NAME ASSIGN INTEGER_VALUE      {
                                                    symbol_table[symbol_table_index].data_type = "int";
                                                    symbol_table[symbol_table_index].name = $1.str_value;
                                                    symbol_table[symbol_table_index].int_value = $3.int_value;
                                                    symbol_table_index++;
                                                    printf("variable declared succefully %d", symbol_table_index);
                                                }
        | VARIABLE_NAME ASSIGN DOUBLE_VALUE     {
                                                    symbol_table[symbol_table_index].data_type = "double";
                                                    symbol_table[symbol_table_index].name = $1.str_value;
                                                    symbol_table[symbol_table_index].double_value = $3.double_value;
                                                    symbol_table_index++;
                                                    printf("variable declared succefully %d", symbol_table_index);
                                                }
        | VARIABLE_NAME ASSIGN CHAR_VALUE       {
                                                    symbol_table[symbol_table_index].data_type = "char";
                                                    symbol_table[symbol_table_index].name = $1.str_value;
                                                    symbol_table[symbol_table_index].char_value = $3.char_value;
                                                    symbol_table_index++;
                                                    printf("variable declared succefully %d", symbol_table_index);
                                                }
        ;




%%










void yyerror(char *s) 
{
    fprintf(stderr, "%s\n", s);
}


int main(void) 
{
    yyparse();
}
