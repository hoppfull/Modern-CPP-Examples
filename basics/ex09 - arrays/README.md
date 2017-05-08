## ex09 - arrays
Demonstration of arrays and pointer arithmetics
```c++
#include <iostream>

int main() {
    // an array is a fixed size list of values:
    int xs[] = { 9, 9, 0, 3, 8, 2, 5, 3, 4 };

    // Retrieve a value from an array by indexing it:
    int x = xs[4]; // index start at 0

    printf("xs[4] = %i\n", x);
    
    // A pointer to the first value of xs
    int *xs_p = &xs[0];

    /*
        Values in an array is located next to each other in computer
        memory. Since xs_p is pointing at the first value of xs, we can
        get the other values by modifying the address of xs_p and
        retrieve that value.
    */

    printf("xs[0] = %i\n", *xs_p);
    printf("xs[1] = %i\n", *(xs_p + 1));
    printf("xs[2] = %i\n", *(xs_p + 2));
    printf("xs[3] = %i\n", *(xs_p + 3));
    printf("xs[4] = %i\n", *(xs_p + 4));
    printf("xs[5] = %i\n", *(xs_p + 5));
    printf("xs[6] = %i\n", *(xs_p + 6));
    printf("xs[7] = %i\n", *(xs_p + 7));
    printf("xs[8] = %i\n", *(xs_p + 8));

    /*
        In modern C++ we don't use arrays apparently. We use vectors
        and maps instead. Vectors and maps are demonstrated in their
        own dedicated examples.
    */

    return 0;
}
```
Console output:
```
xs[4] = 8
xs[0] = 9
xs[1] = 9
xs[2] = 0
xs[3] = 3
xs[4] = 8
xs[5] = 2
xs[6] = 5
xs[7] = 3
xs[8] = 4
```
