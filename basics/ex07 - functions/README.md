## ex07 - functions
Demonstration of functions
```c++
#include <iostream>

int f(int x) {
    return x * 2;
}

// Since g is implemented after main, we can declare g before main so main can use it
int g(int x);

int main() {

    int a = f(10); // calling f with argument 10
    int b = g(8); // calling g with argument 8

    printf("f(10) = %i\n", a);
    printf("g(8) = %i\n", b);

    return 0;
}

int g(int x) {
    return x + 1;
}
```
