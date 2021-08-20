#include <cmath>
#include "calculator.h"

// Stack functions
void Calculator::push(double number) {
    stack.push_back(number);
}
void Calculator::swap() {
    double x{pop()};
    double y{pop()};
    push(y);
    push(x);
}
void Calculator::roll() {
    double x{pop()};
    stack.insert(stack.begin(), x);
}
void Calculator::clear() {
    stack.empty();
}
double Calculator::pop() {
    double toReturn = stack[stack.size() - 1];
    stack.pop_back();
    return toReturn;
}
int Calculator::stack_size() {
    return stack.size();
}
// Operation functions
void Calculator::add() {
    double x{pop()};
    double y{pop()};
    stack.push_back(y + x);
}
void Calculator::subtract() {
    double x{pop()};
    double y{pop()};
    stack.push_back(y - x);
}
void Calculator::multiply() {
    double x{pop()};
    double y{pop()};
    stack.push_back(y * x);
}
void Calculator::divide() {
    double x{pop()};
    double y{pop()};
    stack.push_back(y / x);
}
void Calculator::mod() {
    double x{pop()};
    double y{pop()};
    stack.push_back(static_cast<int>(y) % static_cast<int>(x));
}
// Functions
void Calculator::negate() {
    double x{pop()};
    stack.push_back(x * -1);
}
void Calculator::sin() {
    double x{pop()};
    stack.push_back(std::sin(x));
}
void Calculator::cos() {
    double x{pop()};
    stack.push_back(std::cos(x));
}
void Calculator::tan() {
    double x{pop()};
    stack.push_back(std::tan(x));
}
void Calculator::square() {
    double x{pop()};
    stack.push_back(x * x);
}
void Calculator::inverse() {
    double x{pop()};
    stack.push_back(std::pow(x, -1));
}
void Calculator::pow() {
    double x{pop()};
    double y{pop()};
    stack.push_back(std::pow(y, x));
}
void Calculator::sqrt() {
    double x{pop()};
    stack.push_back(std::sqrt(x));
}
void Calculator::log() {
    double x{pop()};
    stack.push_back(std::log10(x));
}
void Calculator::ln() {
    double x{pop()};
    stack.push_back(std::log(x));
}
void Calculator::e_pow() {
    double x{pop()};
    stack.push_back(std::exp(x));
}
void Calculator::sci_not() {
    double x{pop()};
    stack.push_back(std::pow(10, x));
}
    // Constants
double Calculator::pi() {
    stack.push_back(3.1415926535);
}

int main(int argc, char* argv[]) {

}
