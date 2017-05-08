## ex08 - raw pointers
Demonstration of raw pointers
```c++
#include <iostream>

int main() {
    // a is a value
    int a = 5;
    // a_p is a pointer to a value
    int *a_p = &a;

    // use (&a) to get the pointer pointing at the value a
    // use (*a_p) to get the value pointed at by the pointer a_p

    (*a_p)++; // incrementing the value pointed at by a_p

    printf("a = %i\n", a);

    /*
    This is known as a raw pointer. Usually in modern C++ we don't
    use raw pointers. We use smart pointers. Smart pointers are
    demonstrated in a dedicated example.
    */

    return 0;
}
```
