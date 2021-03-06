/* Generated by re2c 0.16 on Tue Oct 16 11:28:26 2018 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tokenizer.h"



#define YYCTYPE		char
#define YYCURSOR	s->_pchCur
#define YYMARKER	s->ptr
#define YYCTXMARKER	s->_pchBackup


typedef struct Scanner
{
	const char* top;			//start of token
	const char* _pchCur;		//cursor; will be just past token when emitting tokens
	const char* ptr;			//used by re2c to store position for backtracking
	const char* pos;			//
	const char* _pchBackup;		//if we need to do backup from a lookahead
	int line;					//line no in source file
	int current_token;
} Scanner;



int scan(Scanner* s)
{
regular:
	if ('\0' == *s->_pchCur)
	{
		return TOKENIZER_ENDOFINPUT;
	}
	s->top = s->_pchCur;





{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\v':
	case '\f':
	case ' ':	goto yy4;
	case '\n':	goto yy7;
	case '\r':	goto yy9;
	case '"':	goto yy10;
	case '%':	goto yy11;
	case '&':	goto yy13;
	case '(':	goto yy15;
	case ')':	goto yy17;
	case '*':	goto yy19;
	case '+':	goto yy21;
	case ',':	goto yy23;
	case '-':	goto yy25;
	case '/':	goto yy27;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy29;
	case ';':	goto yy32;
	case '<':	goto yy34;
	case '=':	goto yy36;
	case '>':	goto yy38;
	case 'A':
	case 'B':
	case 'D':
	case 'H':
	case 'J':
	case 'M':
	case 'Q':
	case 'V':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'd':
	case 'h':
	case 'j':
	case 'm':
	case 'q':
	case 'v':
	case 'x':
	case 'y':
	case 'z':	goto yy40;
	case 'C':
	case 'c':	goto yy42;
	case 'E':
	case 'e':	goto yy43;
	case 'F':
	case 'f':	goto yy44;
	case 'G':
	case 'g':	goto yy45;
	case 'I':
	case 'i':	goto yy46;
	case 'K':
	case 'k':	goto yy47;
	case 'L':
	case 'l':	goto yy48;
	case 'N':
	case 'n':	goto yy49;
	case 'O':
	case 'o':	goto yy50;
	case 'P':
	case 'p':	goto yy51;
	case 'R':
	case 'r':	goto yy52;
	case 'S':
	case 's':	goto yy53;
	case 'T':
	case 't':	goto yy54;
	case 'U':
	case 'u':	goto yy55;
	case 'W':
	case 'w':	goto yy56;
	case '|':	goto yy57;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{
		printf("unexpected character: %c\n", *s->_pchCur);
		return (TOKENIZER_ERROR);
	}
yy4:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\v':
	case '\f':
	case ' ':	goto yy4;
	default:	goto yy6;
	}
yy6:
	{ goto regular; }
yy7:
	++YYCURSOR;
	{
						s->pos = s->_pchCur;
						s->line++;
						return (TOKENIZER_CR);
					}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy7;
	default:	goto yy3;
	}
yy10:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '"':	goto yy3;
	default:	goto yy59;
	}
yy11:
	++YYCURSOR;
	{ return (TOKENIZER_MOD); }
yy13:
	++YYCURSOR;
	{ return (TOKENIZER_AND); }
yy15:
	++YYCURSOR;
	{ return (TOKENIZER_LEFTPAREN); }
yy17:
	++YYCURSOR;
	{ return (TOKENIZER_RIGHTPAREN); }
yy19:
	++YYCURSOR;
	{ return (TOKENIZER_ASTR); }
yy21:
	++YYCURSOR;
	{ return (TOKENIZER_PLUS); }
yy23:
	++YYCURSOR;
	{ return (TOKENIZER_COMMA); }
yy25:
	++YYCURSOR;
	{ return (TOKENIZER_MINUS); }
yy27:
	++YYCURSOR;
	{ return (TOKENIZER_SLASH); }
yy29:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy29;
	default:	goto yy31;
	}
yy31:
	{ return (TOKENIZER_NUMBER); }
yy32:
	++YYCURSOR;
	{ return (TOKENIZER_SEMICOLON); }
yy34:
	++YYCURSOR;
	{ return (TOKENIZER_LT); }
yy36:
	++YYCURSOR;
	{ return (TOKENIZER_EQ); }
yy38:
	++YYCURSOR;
	{ return (TOKENIZER_GT); }
yy40:
	++YYCURSOR;
yy41:
	{ return (TOKENIZER_VARIABLE); }
yy42:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'A':
	case 'a':	goto yy61;
	case 'H':
	case 'h':	goto yy63;
	case 'L':
	case 'l':	goto yy64;
	case 'O':
	case 'o':	goto yy65;
	case 'U':
	case 'u':	goto yy66;
	default:	goto yy41;
	}
yy43:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'D':
	case 'd':	goto yy67;
	case 'I':
	case 'i':	goto yy68;
	case 'L':
	case 'l':	goto yy69;
	case 'N':
	case 'n':	goto yy70;
	case 'O':
	case 'o':	goto yy71;
	default:	goto yy41;
	}
yy44:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'O':
	case 'o':	goto yy72;
	default:	goto yy41;
	}
yy45:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'O':
	case 'o':	goto yy73;
	default:	goto yy41;
	}
yy46:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'F':
	case 'f':	goto yy74;
	case 'N':
	case 'n':	goto yy76;
	default:	goto yy41;
	}
yy47:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'I':
	case 'i':	goto yy77;
	default:	goto yy41;
	}
yy48:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'E':
	case 'e':	goto yy78;
	default:	goto yy41;
	}
yy49:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'E':
	case 'e':	goto yy79;
	default:	goto yy41;
	}
yy50:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'U':
	case 'u':	goto yy80;
	default:	goto yy41;
	}
yy51:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'E':
	case 'e':	goto yy81;
	case 'N':
	case 'n':	goto yy82;
	case 'O':
	case 'o':	goto yy83;
	case 'R':
	case 'r':	goto yy84;
	case 'T':
	case 't':	goto yy85;
	default:	goto yy41;
	}
yy52:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'E':
	case 'e':	goto yy86;
	case 'N':
	case 'n':	goto yy87;
	default:	goto yy41;
	}
yy53:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'E':
	case 'e':	goto yy88;
	case 'X':
	case 'x':	goto yy89;
	default:	goto yy41;
	}
yy54:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'E':
	case 'e':	goto yy90;
	case 'H':
	case 'h':	goto yy91;
	case 'O':
	case 'o':	goto yy92;
	case 'U':
	case 'u':	goto yy94;
	default:	goto yy41;
	}
yy55:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'I':
	case 'i':	goto yy95;
	case 'O':
	case 'o':	goto yy96;
	default:	goto yy41;
	}
yy56:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'A':
	case 'a':	goto yy97;
	default:	goto yy41;
	}
yy57:
	++YYCURSOR;
	{ return (TOKENIZER_OR); }
yy59:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '"':	goto yy98;
	default:	goto yy59;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'L':
	case 'l':	goto yy100;
	default:	goto yy62;
	}
yy62:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0: 	goto yy3;
	case 1: 	goto yy41;
	case 2: 	goto yy104;
	case 3: 	goto yy109;
	case 4: 	goto yy123;
	case 5: 	goto yy143;
	default:	goto yy196;
	}
yy63:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'R':
	case 'r':	goto yy101;
	default:	goto yy62;
	}
yy64:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'R':
	case 'r':	goto yy103;
	case 'S':
	case 's':	goto yy105;
	default:	goto yy62;
	}
yy65:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'L':
	case 'l':	goto yy107;
	default:	goto yy62;
	}
yy66:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'R':
	case 'r':	goto yy108;
	default:	goto yy62;
	}
yy67:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'R':
	case 'r':	goto yy110;
	default:	goto yy62;
	}
yy68:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'N':
	case 'n':	goto yy112;
	default:	goto yy62;
	}
yy69:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'S':
	case 's':	goto yy114;
	default:	goto yy62;
	}
yy70:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'D':
	case 'd':	goto yy115;
	default:	goto yy62;
	}
yy71:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'U':
	case 'u':	goto yy117;
	default:	goto yy62;
	}
yy72:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'R':
	case 'r':	goto yy118;
	default:	goto yy62;
	}
yy73:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'S':
	case 's':	goto yy120;
	case 'T':
	case 't':	goto yy121;
	default:	goto yy62;
	}
yy74:
	++YYCURSOR;
	{ return (TOKENIZER_IF); }
yy76:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'P':
	case 'p':	goto yy122;
	default:	goto yy62;
	}
yy77:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'N':
	case 'n':	goto yy124;
	default:	goto yy62;
	}
yy78:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'D':
	case 'd':	goto yy126;
	case 'T':
	case 't':	goto yy128;
	default:	goto yy62;
	}
yy79:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'X':
	case 'x':	goto yy130;
	default:	goto yy62;
	}
yy80:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy131;
	default:	goto yy62;
	}
yy81:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'E':
	case 'e':	goto yy133;
	default:	goto yy62;
	}
yy82:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy134;
	default:	goto yy62;
	}
yy83:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'K':
	case 'k':	goto yy136;
	default:	goto yy62;
	}
yy84:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'I':
	case 'i':	goto yy137;
	default:	goto yy62;
	}
yy85:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'L':
	case 'l':	goto yy138;
	default:	goto yy62;
	}
yy86:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'M':
	case 'm':	goto yy140;
	case 'T':
	case 't':	goto yy142;
	default:	goto yy62;
	}
yy87:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'D':
	case 'd':	goto yy144;
	default:	goto yy62;
	}
yy88:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy146;
	default:	goto yy62;
	}
yy89:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'Y':
	case 'y':	goto yy147;
	default:	goto yy62;
	}
yy90:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'R':
	case 'r':	goto yy149;
	default:	goto yy62;
	}
yy91:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'E':
	case 'e':	goto yy150;
	default:	goto yy62;
	}
yy92:
	++YYCURSOR;
	{ return (TOKENIZER_TO); }
yy94:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'N':
	case 'n':	goto yy151;
	default:	goto yy62;
	}
yy95:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'N':
	case 'n':	goto yy152;
	default:	goto yy62;
	}
yy96:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'U':
	case 'u':	goto yy154;
	default:	goto yy62;
	}
yy97:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'I':
	case 'i':	goto yy155;
	default:	goto yy62;
	}
yy98:
	++YYCURSOR;
	{ return (TOKENIZER_STRING); }
yy100:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'L':
	case 'l':	goto yy156;
	default:	goto yy62;
	}
yy101:
	++YYCURSOR;
	{ return (TOKENIZER_CHR); }
yy103:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'S':
	case 's':	goto yy158;
	default:	goto yy104;
	}
yy104:
	{ return (TOKENIZER_CLRSCR); }
yy105:
	++YYCURSOR;
	{ return (TOKENIZER_CLRSCR); }
yy107:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'O':
	case 'o':	goto yy159;
	default:	goto yy62;
	}
yy108:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'S':
	case 's':	goto yy160;
	default:	goto yy109;
	}
yy109:
	{ return (TOKENIZER_CURSOR); }
yy110:
	++YYCURSOR;
	{ return (TOKENIZER_EDR); }
yy112:
	++YYCURSOR;
	{ return (TOKENIZER_EIN); }
yy114:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'E':
	case 'e':	goto yy161;
	default:	goto yy62;
	}
yy115:
	++YYCURSOR;
	{ return (TOKENIZER_END); }
yy117:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy163;
	default:	goto yy62;
	}
yy118:
	++YYCURSOR;
	{ return (TOKENIZER_FOR); }
yy120:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'U':
	case 'u':	goto yy165;
	default:	goto yy62;
	}
yy121:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'O':
	case 'o':	goto yy166;
	default:	goto yy62;
	}
yy122:
	yyaccept = 4;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'U':
	case 'u':	goto yy168;
	default:	goto yy123;
	}
yy123:
	{ return (TOKENIZER_INPUT); }
yy124:
	++YYCURSOR;
	{ return (TOKENIZER_KIN); }
yy126:
	++YYCURSOR;
	{ return (TOKENIZER_LED); }
yy128:
	++YYCURSOR;
	{ return (TOKENIZER_LET); }
yy130:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy169;
	default:	goto yy62;
	}
yy131:
	++YYCURSOR;
	{ return (TOKENIZER_OUT); }
yy133:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'K':
	case 'k':	goto yy171;
	default:	goto yy62;
	}
yy134:
	++YYCURSOR;
	{ return (TOKENIZER_PRINT); }
yy136:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'E':
	case 'e':	goto yy173;
	default:	goto yy62;
	}
yy137:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'N':
	case 'n':	goto yy175;
	default:	goto yy62;
	}
yy138:
	++YYCURSOR;
	{ return (TOKENIZER_PRINTLN); }
yy140:
	++YYCURSOR;
	{ return (TOKENIZER_REM); }
yy142:
	yyaccept = 5;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'U':
	case 'u':	goto yy176;
	default:	goto yy143;
	}
yy143:
	{ return (TOKENIZER_RETURN); }
yy144:
	++YYCURSOR;
	{ return (TOKENIZER_RND); }
yy146:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'X':
	case 'x':	goto yy177;
	default:	goto yy62;
	}
yy147:
	++YYCURSOR;
	{ return (TOKENIZER_SETXY); }
yy149:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'M':
	case 'm':	goto yy178;
	default:	goto yy62;
	}
yy150:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'N':
	case 'n':	goto yy179;
	default:	goto yy62;
	}
yy151:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'E':
	case 'e':	goto yy181;
	default:	goto yy62;
	}
yy152:
	++YYCURSOR;
	{ return (TOKENIZER_UIN); }
yy154:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy183;
	default:	goto yy62;
	}
yy155:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy185;
	default:	goto yy62;
	}
yy156:
	++YYCURSOR;
	{ return (TOKENIZER_CALL); }
yy158:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'C':
	case 'c':	goto yy187;
	default:	goto yy62;
	}
yy159:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'R':
	case 'r':	goto yy188;
	default:	goto yy62;
	}
yy160:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'O':
	case 'o':	goto yy190;
	default:	goto yy62;
	}
yy161:
	++YYCURSOR;
	{ return (TOKENIZER_ELSE); }
yy163:
	++YYCURSOR;
	{ return (TOKENIZER_EOUT); }
yy165:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'B':
	case 'b':	goto yy191;
	default:	goto yy62;
	}
yy166:
	++YYCURSOR;
	{ return (TOKENIZER_GOTO); }
yy168:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy193;
	default:	goto yy62;
	}
yy169:
	++YYCURSOR;
	{ return (TOKENIZER_NEXT); }
yy171:
	++YYCURSOR;
	{ return (TOKENIZER_PEEK); }
yy173:
	++YYCURSOR;
	{ return (TOKENIZER_POKE); }
yy175:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy195;
	default:	goto yy62;
	}
yy176:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'R':
	case 'r':	goto yy197;
	default:	goto yy62;
	}
yy177:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'Y':
	case 'y':	goto yy198;
	default:	goto yy62;
	}
yy178:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'T':
	case 't':	goto yy200;
	case 'U':
	case 'u':	goto yy202;
	default:	goto yy62;
	}
yy179:
	++YYCURSOR;
	{ return (TOKENIZER_THEN); }
yy181:
	++YYCURSOR;
	{ return (TOKENIZER_TUNE); }
yy183:
	++YYCURSOR;
	{ return (TOKENIZER_UOUT); }
yy185:
	++YYCURSOR;
	{ return (TOKENIZER_WAIT); }
yy187:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'R':
	case 'r':	goto yy203;
	default:	goto yy62;
	}
yy188:
	++YYCURSOR;
	{ return (TOKENIZER_COLOR); }
yy190:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'R':
	case 'r':	goto yy205;
	default:	goto yy62;
	}
yy191:
	++YYCURSOR;
	{ return (TOKENIZER_GOSUB); }
yy193:
	++YYCURSOR;
	{ return (TOKENIZER_INPUT); }
yy195:
	yyaccept = 6;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'L':
	case 'l':	goto yy207;
	default:	goto yy196;
	}
yy196:
	{ return (TOKENIZER_PRINT); }
yy197:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'N':
	case 'n':	goto yy208;
	default:	goto yy62;
	}
yy198:
	++YYCURSOR;
	{ return (TOKENIZER_SETXY); }
yy200:
	++YYCURSOR;
	{ return (TOKENIZER_TERMT); }
yy202:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'P':
	case 'p':	goto yy210;
	default:	goto yy62;
	}
yy203:
	++YYCURSOR;
	{ return (TOKENIZER_CLRSCR); }
yy205:
	++YYCURSOR;
	{ return (TOKENIZER_CURSOR); }
yy207:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'N':
	case 'n':	goto yy212;
	default:	goto yy62;
	}
yy208:
	++YYCURSOR;
	{ return (TOKENIZER_RETURN); }
yy210:
	++YYCURSOR;
	{ return (TOKENIZER_TERMUP); }
yy212:
	++YYCURSOR;
	{ return (TOKENIZER_PRINTLN); }
}


}


#if 0
int xxxxTest()
{
	FILE* fp;
	long size;
	char* buff;
	size_t bytes;
	int token = 0;
	Scanner scanner;

	/* Open input file */
	fp = fopen("life8.bas", "rb");
	if(fp == NULL)
	{
		fprintf(stderr, "Can't open test file\n");
		return -1;
	}

	/* Get file size */
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	rewind(fp);

	/* Allocate buffer and read */
	buff = (char*) malloc(size * sizeof(char));
	bytes = fread(buff, 1, size, fp);  
	if (bytes != size)
	{
		fprintf(stderr, "Reading error"); 
		return -1;
	}

	/* Start scanning */
	scanner.top = buff;
	scanner._pchCur = buff;
	scanner.pos = buff;
	scanner._pchBackup = buff;
	scanner.line = 1;

	while(token = scan(&scanner))
	{
		switch(token)
		{
			case TOKENIZER_ERROR: printf("TOKENIZER_ERROR\n"); break;
			case TOKENIZER_ENDOFINPUT: printf("TOKENIZER_ENDOFINPUT\n"); break;

			case TOKENIZER_NUMBER:
				printf("#%.*s ", scanner._pchCur - scanner.top, scanner.top);
			break;
			case TOKENIZER_STRING:
				printf("\"%.*s\" ", scanner._pchCur - scanner.top, scanner.top);
			break;
			case TOKENIZER_VARIABLE:
				printf("(\'%.*s\')", scanner._pchCur - scanner.top, scanner.top);
			break;

			case TOKENIZER_LET: printf("TOKENIZER_LET "); break;
			case TOKENIZER_PRINT: printf("TOKENIZER_PRINT "); break;
			case TOKENIZER_IF: printf("TOKENIZER_IF "); break;
			case TOKENIZER_THEN: printf("TOKENIZER_THEN "); break;
			case TOKENIZER_ELSE: printf("TOKENIZER_ELSE "); break;
			case TOKENIZER_FOR: printf("TOKENIZER_FOR "); break;
			case TOKENIZER_TO: printf("TOKENIZER_TO "); break;
			case TOKENIZER_NEXT: printf("TOKENIZER_NEXT "); break;
			case TOKENIZER_GOTO: printf("TOKENIZER_GOTO "); break;
			case TOKENIZER_GOSUB: printf("TOKENIZER_GOSUB "); break;
			case TOKENIZER_RETURN: printf("TOKENIZER_RETURN "); break;
			case TOKENIZER_CALL: printf("TOKENIZER_CALL "); break;
			case TOKENIZER_END: printf("TOKENIZER_END "); break;
			case TOKENIZER_COMMA: printf("TOKENIZER_COMMA "); break;
			case TOKENIZER_SEMICOLON: printf("TOKENIZER_SEMICOLON "); break;
			case TOKENIZER_PLUS: printf("TOKENIZER_PLUS "); break;
			case TOKENIZER_MINUS: printf("TOKENIZER_MINUS "); break;
			case TOKENIZER_AND: printf("TOKENIZER_AND "); break;
			case TOKENIZER_OR: printf("TOKENIZER_OR "); break;
			case TOKENIZER_ASTR: printf("TOKENIZER_ASTR "); break;
			case TOKENIZER_SLASH: printf("TOKENIZER_SLASH "); break;
			case TOKENIZER_MOD: printf("TOKENIZER_MOD "); break;
			case TOKENIZER_LEFTPAREN: printf("TOKENIZER_LEFTPAREN "); break;
			case TOKENIZER_RIGHTPAREN: printf("TOKENIZER_RIGHTPAREN "); break;
			case TOKENIZER_LT: printf("TOKENIZER_LT "); break;
			case TOKENIZER_GT: printf("TOKENIZER_GT "); break;
			case TOKENIZER_EQ: printf("TOKENIZER_EQ "); break;
			case TOKENIZER_CR:
				printf("\n");
			break;
			case TOKENIZER_OUT: printf("TOKENIZER_OUT "); break;
			case TOKENIZER_TUNE: printf("TOKENIZER_TUNE "); break;
			case TOKENIZER_TERMT: printf("TOKENIZER_TERMT "); break;
			case TOKENIZER_SETXY: printf("TOKENIZER_SETXY "); break;
			case TOKENIZER_CLRSCR: printf("TOKENIZER_CLRSCR "); break;
			case TOKENIZER_WAIT: printf("TOKENIZER_WAIT "); break;
			case TOKENIZER_LED: printf("TOKENIZER_LED "); break;
			case TOKENIZER_COLOR: printf("TOKENIZER_COLOR "); break;
			case TOKENIZER_RND: printf("TOKENIZER_RND "); break;
			case TOKENIZER_CHR: printf("TOKENIZER_CHR "); break;
			case TOKENIZER_EIN: printf("TOKENIZER_EIN "); break;
			case TOKENIZER_EOUT: printf("TOKENIZER_EOUT "); break;
			case TOKENIZER_EDR: printf("TOKENIZER_EDR "); break;
			case TOKENIZER_PRINTLN: printf("TOKENIZER_PRINTLN "); break;
			case TOKENIZER_TERMUP: printf("TOKENIZER_TERMUP "); break;
			case TOKENIZER_REM: printf("TOKENIZER_REM "); break;
			case TOKENIZER_UIN: printf("TOKENIZER_UIN "); break;
			case TOKENIZER_UOUT: printf("TOKENIZER_UOUT "); break;
			case TOKENIZER_INPUT: printf("TOKENIZER_INPUT "); break;
			case TOKENIZER_PEEK: printf("TOKENIZER_PEEK "); break;
			case TOKENIZER_POKE: printf("TOKENIZER_POKE "); break;
			case TOKENIZER_CURSOR: printf("TOKENIZER_CURSOR "); break;
			case TOKENIZER_KIN: printf("TOKENIZER_KIN "); break;

			default:
			break;
		}
		if(TOKENIZER_ENDOFINPUT == token)
		{
			break;
		}
	}

	/* Close file and deallocate */
	fclose(fp);
	free(buff);
	return 0;
}
#endif


/*---------------------------------------------------------------------------*/


#define DEBUG 0

#if DEBUG
#define DEBUG_PRINTF(...)  printf(__VA_ARGS__)
#else
#define DEBUG_PRINTF(...)
#endif

Scanner _scanner;


/*---------------------------------------------------------------------------*/
void
tokenizer_init(const char* program)
	{
	/* Start scanning */
	_scanner.top = program;
	_scanner._pchCur = program;
	_scanner.pos = program;
	_scanner._pchBackup = program;
	_scanner.line = 1;

	_scanner.current_token = scan(&_scanner);
	}
/*---------------------------------------------------------------------------*/
int
tokenizer_token(void)
	{
	return _scanner.current_token;
	}
/*---------------------------------------------------------------------------*/
void
tokenizer_next(void)
	{
	if(tokenizer_finished())
		{
		return;
		}
	_scanner.current_token = scan(&_scanner);
	DEBUG_PRINTF("tokenizer_next: '%.*s' %d\n", _scanner._pchCur - _scanner.top, _scanner.top, _scanner.current_token);
	return;
	}
/*---------------------------------------------------------------------------*/
int
tokenizer_num(void)
	{
	return atoi(_scanner.top);
	}
/*---------------------------------------------------------------------------*/
void
tokenizer_string(char *dest, int len)
	{
	int string_len = _scanner._pchCur - _scanner.top;
	//2 because of quote marks we know we have
	string_len -= 2;
	if(len < string_len)
		{
		string_len = len;
		}
	memcpy(dest, _scanner.top+1, string_len);
	dest[string_len] = 0;
	}
/*---------------------------------------------------------------------------*/
void
tokenizer_error_print(void)
	{
	DEBUG_PRINTF("tokenizer_error_print: '%.*s'\n", _scanner._pchCur - _scanner.top, _scanner.top);
	}
/*---------------------------------------------------------------------------*/
int
tokenizer_finished(void)
	{
	return *_scanner.top == 0 || _scanner.current_token == TOKENIZER_ENDOFINPUT;
	}
/*---------------------------------------------------------------------------*/
int
tokenizer_variable_num(void)
	{
	if (*_scanner.top >= 'a' && *_scanner.top <= 'z') return *_scanner.top - 'a';
	else return *_scanner.top - 'A';
	}
/*---------------------------------------------------------------------------*/
const char* __getAt ( void )	//XXX hack for goto cache impl
{
	return _scanner.top;
}
