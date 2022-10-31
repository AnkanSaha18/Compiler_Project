%%

"#import ".+".h"		{printf("Header file imported");}

"<!".*"!>"				{printf("multiline or singleline comment");}


"<InT>"					{printf("int detected");}

"<ChaR>"				{printf("char detected");}

"<LonG>"				{printf("long detected");}

"<Float>"				{printf("float detected");}

"<Double>"				{printf("double detected");}

":="					{printf("assign");}

"=="					{printf("equal detected");}

">>"					{printf("greater than >");}

"<<"					{printf("less than <");}

">>=="					{printf("greater than and equal >=");}

"<<=="					{printf("less than and equal <=");}

"AnD"					{printf("AND operation &&");}

"OR"					{printf("OR operation ||");}

"NoT"					{printf("NOT operation !");}

"NoT=="					{printf("NOT equal");}

"BinaryAnD"				{printf("binary AND &");}

"BinaryOR"				{printf("binary OR |");}

"BinaryNot"				{printf("binary not ~");}

"+sign+"				{printf("plus +");}

"-sign-"				{printf("minus -");}

"*sign*"				{printf("multiplecation *");}

"/sign/"				{printf("division /");}

"%sign%"				{printf("modulus %");}

"//sign//"				{printf("power pow");}

"IncOnE"				{printf("increment one ++");}

"DecOnE"				{printf("decriment one --");}



"(("					{printf("first bracket open");}

"))"					{printf("first bracket close");}

"{{"					{printf("second bracket open");}

"}}"					{printf("second bracket close");}

";;"					{printf("semicolon ;");}

"EmptY"					{printf("void");}

"Come-bacK"				{printf("return");}

"<PrintF>"				{printf("printf detected");}

"<ScanF>"				{printf("printf detected");}

"<FoR>"					{printf("for loop");}

"<WhilE>(".*"){".*"}"	{printf("while loop");}

"<ContinuE>"			{printf("continue");}

"<BreaK>"				{printf("break");}

"<Static>"				{printf("static");}

"<StrucT>"				{printf("structure");}

"<AmountoF>"			{printf("sizeof function");}

"<IF>"					{printf("if");}

"<ElseiF>"				{printf("elseif");}

"<ElsE>"				{printf("else");}




%%

int yywrap()
{
	return 1;
}

int main()
{
	yyin = freopen("input.txt", "r", stdin);
	yyout = freopen("output.txt", "w", stdout);
	yylex();
	return 0;
}
