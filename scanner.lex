%{
	#include "utility.hpp"
	#include "parser.tab.hpp"
	#include "hw3_output.hpp"
	void lexError();
	
%}

%option yylineno
%option noyywrap
%option nounput


%%

void							return VOID;
int								return INT;
byte							return BYTE;
b								return B;
bool							return BOOL;
and								return AND;
or								return OR;
not								return NOT;
true							return TRUE;
false							return FALSE;
return							return RETURN;
if								return IF;
else							return ELSE;
while							return WHILE;
break							return BREAK;
continue						return CONTINUE;
switch							return SWITCH;
case							return CASE;
default							return DEFAULT;
:								return COLON;
;								return SC;
,								return COMMA;
\(								return LPAREN;
\)								return RPAREN;
\{								return LBRACE;
\}								return RBRACE;
"="								return ASSIGN;
"==" 							return EQUAL;
"!="							return EQUAL;
"<"								return RELOP;
">"								return RELOP;
"<="							return RELOP;
">="							return RELOP;

"+" 							return PLUS;
"-"								return PLUS;
"*"								return MULT;
"/"								return MULT;
([a-zA-Z])([a-zA-Z0-9])*		{
									yylval = new ID_t(yytext); 
									return ID;
								}

([1-9])([0-9])*					yylval = new NUM_t(yytext); return NUM;
0								yylval = new NUM_t(yytext); return NUM;
\"([^\n\r\"\\]|\\[rnt"\\])+\"		return STRING;
[ \t\n\r]						;
"//"[^\r\n]*						;
.								lexError();								

%%

void lexError() {
	output::errorLex(yylineno);
	exit(0);
}