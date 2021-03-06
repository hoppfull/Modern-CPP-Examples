#include <iostream>

template<class T>
T f(T a) {
    // parameter a is of generic type T
    return a * 2;
}

int main() {
    // auto uses automatic type deduction:
    auto x = f(7.1); // x is determined to be a double
    auto y = f(42); // y is determined to be an int

    // more details on automatic type deduction is explained in a dedicated example

    printf("x = %f\n", x);
    printf("y = %i\n", y);

    return 0;
}
