#pragma once
#include <memory>

class ExprAST;
class PrototypeAST;

std::unique_ptr<ExprAST> LogError(const std::string& msg, char found);

std::unique_ptr<PrototypeAST> LogErrorP(const std::string& msg, char found);
