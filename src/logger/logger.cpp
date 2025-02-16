/// LogError* - These are little helper functions for error handling.
#include <iostream>
#include <memory>
#include <sstream>

#include "../ast/ExprAST.h"
#include "../ast/PrototypeAST.h"

std::unique_ptr<ExprAST> LogError(const std::string& msg, char found) {
    std::ostringstream oss;
    oss << msg << "Found: '" << found << "'";
    std::cerr << "Error: " << oss.str() << std::endl;
    return nullptr;
}

std::unique_ptr<PrototypeAST> LogErrorP(const std::string& msg, char found) {
    LogError(msg, found);
    return nullptr;
}
