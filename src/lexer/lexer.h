#pragma once

#include <cstdlib>
#include <string>

// Provide a simple token buffer
// Curtok is the current token the parser is looking at
// getNextToken reads another token from the lexer adn updates Curtok with its
// results
extern int CurTok;
int gettok();
int getNextToken();

// If the current token is an identifier
// IdentifierStr will hold the name of the identifier
extern std::string IdentifierStr;

// If the current token is a numerical literal
// NumVal holds its value
extern double NumVal;
