#ifndef CALCULATOR_H
#define CALCULATOR_h
#include <vector>

class Calculator {
    std::vector<double> stack;

public:
    // Stack functions
    void push(double number);
    void swap();
    void roll();
    void clear();
    double pop();
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
    double pi();
};

#endif