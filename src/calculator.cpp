#include <cmath>
#include "calculator.h"

// Stack functions
void Calculator::push(number_t number) {
    stack.push_back(number);
}
void Calculator::swap() {
    number_t x{pop()};
    number_t y{pop()};
    push(y);
    push(x);
}
void Calculator::roll() {
    number_t x{pop()};
    stack.insert(stack.begin(), x);
}
void Calculator::clear() {
    stack.empty();
}
number_t Calculator::pop() {
    /* Returns 0 in case the stack is empty to prevent any errors
       trying to access an empty cell. This further helps with
       swap, roll, and other functions which use pop */
    number_t toReturn{0};
    if (stack.size() > 0) {
        toReturn = stack[stack.size() - 1];
        stack.pop_back();
    }
    return toReturn;
}
int Calculator::stack_size() {
    return stack.size();
}
// Operation functions
void Calculator::add() {
    number_t x{pop()};
    number_t y{pop()};
    stack.push_back(y + x);
}
void Calculator::subtract() {
    number_t x{pop()};
    number_t y{pop()};
    stack.push_back(y - x);
}
void Calculator::multiply() {
    number_t x{pop()};
    number_t y{pop()};
    stack.push_back(y * x);
}
void Calculator::divide() {
    number_t x{pop()};
    number_t y{pop()};
    stack.push_back(y / x);
}
void Calculator::mod() {
    number_t x{pop()};
    number_t y{pop()};
    stack.push_back(static_cast<int>(y) % static_cast<int>(x));
}
// Functions
void Calculator::negate() {
    number_t x{pop()};
    stack.push_back(x * -1);
}
void Calculator::sin() {
    number_t x{pop()};
    stack.push_back(std::sin(x));
}
void Calculator::cos() {
    number_t x{pop()};
    stack.push_back(std::cos(x));
}
void Calculator::tan() {
    number_t x{pop()};
    stack.push_back(std::tan(x));
}
void Calculator::square() {
    number_t x{pop()};
    stack.push_back(x * x);
}
void Calculator::inverse() {
    number_t x{pop()};
    stack.push_back(std::pow(x, -1));
}
void Calculator::pow() {
    number_t x{pop()};
    number_t y{pop()};
    stack.push_back(std::pow(y, x));
}
void Calculator::sqrt() {
    number_t x{pop()};
    stack.push_back(std::sqrt(x));
}
void Calculator::log() {
    number_t x{pop()};
    stack.push_back(std::log10(x));
}
void Calculator::ln() {
    number_t x{pop()};
    stack.push_back(std::log(x));
}
void Calculator::e_pow() {
    number_t x{pop()};
    stack.push_back(std::exp(x));
}
void Calculator::sci_not() {
    number_t x{pop()};
    stack.push_back(std::pow(10, x));
}
    // Constants
number_t Calculator::pi() {
    stack.push_back(3.1415926535);
}
