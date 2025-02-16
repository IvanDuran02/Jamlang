#pragma once

#include "ExprAST.h"
#include <string>

/// VariableExprAST - Expression class for referencing variables like "a"
class VariableExprAST : public ExprAST {
    std::string Name;

  public:
    VariableExprAST(const std::string &Name) : Name(Name) {}
};
