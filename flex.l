%%

"#import ".+".h"		{printf(" Header_file_imported ");}

"<!".*"!>"				{printf(" multiline_or_singleline_comment ");}


"<InT>"					{printf(" int_detected ");}

"<ChaR>"				{printf(" char_detected ");}

"<LonG>"				{printf(" long_detected ");}

"<FloaT>"				{printf(" float_detected ");}

"<DoublE>"				{printf(" double_detected ");}

":="					{printf(" assign = ");}

"=="					{printf(" equal_detected == ");}

">>"					{printf(" greater_than > ");}

"<<"					{printf(" less_than < ");}

">>=="					{printf(" greater_than_and_equal >= ");}

"<<=="					{printf(" less_than_and_equal <= ");}

"AnD"					{printf(" AND_operation && ");}

"OR"					{printf(" OR_operation || ");}

"NoT"					{printf(" NOT_operation ! ");}

"NoT=="					{printf(" NOT_equal != ");}

"BinaryAnD"				{printf(" binary_AND & ");}

"BinaryOR"				{printf(" binary_OR | ");}

"BinaryNoT"				{printf(" binary_not ~ ");}

"TruE"					{printf(" Boolian_true ");}

"FalsE"					{printf(" Boolian_false ");}

"+sign+"				{printf(" plus + ");}

"-sign-"				{printf(" minus - ");}

"*sign*"				{printf(" multiplecation * ");}

"/sign/"				{printf(" division / ");}

"%sign%"				{printf(" modulus % ");}

"//sign//"				{printf(" power_pow ");}

"IncOnE"				{printf(" increment_one ++ ");}

"DecOnE"				{printf(" decriment_one -- ");}

"((".*"))"				{printf(" in_first_bracket ");}

"{{".*"}}"				{printf(" in_second_bracket ");}

"(("					{printf(" first_bracket_open ( ");}

"))"					{printf(" first_bracket_close ) ");}

"{{"					{printf(" second_bracket_open { ");}

"}}"					{printf(" second_bracket_close } ");}

";;"					{printf(" semicolon ; ");}

"EmptY"					{printf(" void ");}

"Come_bacK"				{printf(" return ");}

"<PrintF>((".*"))"		{printf(" printf_detected ");}

"<ScanF>((".*"))"		{printf(" scanf_detected ");}

"<FoR>((".*";;".*";;".*"))"		{printf(" for_loop ");}

"<WhilE>((".*"))"		{printf(" while_loop ");}

"<ContinuE>"			{printf(" continue ");}

"<BreaK>"				{printf(" break ");}

"<Static>"				{printf(" static ");}

"<StrucT>"				{printf(" structure ");}

"<AmountoF>"			{printf(" sizeof_function ");}

"<IF>((".*"))"			{printf(" if ");}

"<ElseiF>((".*"))"		{printf(" elseif ");}

"<ElsE>"				{printf(" else ");}


[+]?[0-9]+				{printf(" positive_integer ");}

[-][0-9]+				{printf(" negative_integer ");}

[+]?[0-9]+"."[0-9]+				{printf(" positive_double ");}

[-][0-9]+"."[0-9]+				{printf(" negative_double ");}

"'"[a-zA-Z0-9]"'"		{printf(" charecter ");}

"'"[a-zA-Z0-9]+"'"		{printf(" string ");}

[a-zA-Z][a-zA-Z0-9]*	{printf(" variable_name ");}

.						{}




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
