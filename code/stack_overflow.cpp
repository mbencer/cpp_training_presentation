#include <iostream>

void stack_overflow() {
    double x[123456789];
}

int main() {
    stack_overflow();
    return 0;
}