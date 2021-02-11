#include "fmt/core.h"

int main(int argc, char** argv) {
    fmt::print("Hello, this is `{}`", argv[0]);
    
    return 0;
}