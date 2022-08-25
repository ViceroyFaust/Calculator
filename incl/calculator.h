#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <vector>

using number_t = double;

class Calculator {
    std::vector<number_t> stack;

public:
    // Stack functions
    void push(number_t number);
    void swap();
    void roll();
    bool clear();
    number_t pop();
    int stack_size();
    // Operation functions
    void add();
    void subtract();
    void multiply();
    void divide();
    void mod();
    // Functions
    void negate();
    void sin();
    void cos();
    void tan();
    void square();
    void inverse();
    void pow();
    void sqrt();
    void log();
    void ln();
    void e_pow();
    void sci_not();
    // Constants
    void pi();
};

#endif
