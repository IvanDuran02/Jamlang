#pragma once

#include "ExprAST.h"

/// NumberExprAST - Expression class fro numeric literals like "1.0".
class NumberExprAST : public ExprAST {
    double Val;

  public:
    NumberExprAST(double Val) : Val(Val) {}
};
