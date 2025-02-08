/// LogError* - These are little helper functions for error handling.
#include <memory>

#include "../ast/ExprAST.h"
#include "../ast/PrototypeAST.h"

std::unique_ptr<ExprAST> LogError(const char *Str) {
    fprintf(stderr, "Error: %s\n", Str);
    return nullptr;
}

std::unique_ptr<PrototypeAST> LogErrorP(const char *Str) {
    LogError(Str);
    return nullptr;
}
