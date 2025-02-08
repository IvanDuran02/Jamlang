#pragma once
#include <memory>

class ExprAST;
class PrototypeAST;

std::unique_ptr<ExprAST> LogError(const char *Str);

std::unique_ptr<PrototypeAST> LogErrorP(const char *Str);
