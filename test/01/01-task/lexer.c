#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// ================== TOKEN DEFINITION ==================
typedef enum{
    TOKEN_INT,
    TOKEN_IDENT,
    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_STAR,
    TOKEN_SLASH,
    TOKEN_SEMI,
    TOKEN_LPAREN,
    TOKEN_RPAREN,
    TOKEN_LBRACE,
    TOKEN_RBRACE,
    TOKEN_EOF,
} TokenKind;

typedef struct {
    TokenKind kind;
    char *lexeme;
    int value;
} Token;

#define MAX_TOKENS 1000
Token token[MAX_TOKENS];
int token_count = 0;

//==================HELPER==============================
void add_token(TokenKind kind, const char *lexeme, int value){
    token[token_count].kind = kind;
    token[token_count].lexeme = strdup(lexeme);
    token[token_count].value = value;
};