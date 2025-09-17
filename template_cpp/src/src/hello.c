#include "hello.h"

void hello(void) {
    printf("Source files that end in .c will be compiled automatically with gcc,\n"
           "while source files that end in .cpp will be compiled automatically with g++.\n"
           "For those that prefer C, they can either use the provided C++\n"
           "argument parser and write everything else in C, or delete the\n"
           "provided main.cpp and start from scratch.\n"
           "Those who have both .c and .cpp files should ensure to have a compatible ABI when calling C functions from C++ "
           "(see `hello.h` on how to do this).\n");
}
