#pragma once

/// ExprAST - Base class for all expression nodes.
/// A type field can be added in the future for further functionality.
class ExprAST {
  public:
    virtual ~ExprAST() = default;
};
