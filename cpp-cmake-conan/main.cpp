#include "fmt/core.h"
#include "fmt/printf.h"

int main(int argc, char** argv) {
    fmt::print("Hello, this is `{}`", argv[0]);
    return EXIT_SUCCESS;
}