## ex05 - while control structure
Demonstration of the while control structure and how incrementing integers work
```c++
#include <iostream>

int main() {
    int x = 0;

    while (x < 10) {
        /*
            this code block will be performed multiple
            times as long as predicate (x < 10) holds true
        */
        printf("x = %i\n", x);
        x++; // increment x by one
    }

    /*
        C++ has the concept of truthiness. 0 is falsy and will
        evaluate as a false statement when used as a predicte.
    */
    while (x--) // perform block until x reaches 0
        printf("x = %i\n", x);

    // if a while loop control structure never reaches a false case, it will loop forever

    /* Incrementing and decrementing
        int a = 0;
        int b = a++; // value of a is returned before incrementing

        a will now be 1
        b will now be 0

        int c = ++b; // b is incremented before its value is returned

        a will still be 1
        b will now be 1
        c will now be 1
    */

    return 0;
}
```
Console output:
```
x = 0
x = 1
x = 2
x = 3
x = 4
x = 5
x = 6
x = 7
x = 8
x = 9
x = 9
x = 8
x = 7
x = 6
x = 5
x = 4
x = 3
x = 2
x = 1
x = 0
```
