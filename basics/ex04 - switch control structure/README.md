## ex04 - switch control structure
Demonstration of the switch control structure
```c++
#include <iostream>

int main() {
    int x = 2;

    // go to case that matches the value of x:
    switch (x) {
    case 0:
        printf("x equals zero!\n");
        // without break the next case will be perform even if it doesn't match x:
        break;
    case 1:
        printf("x equals one!\n");
        break;
    case 2:
        printf("x equals two!\n");
        break;
    case 3:
        printf("x equals three!\n");
        break;
    case 4:
        printf("x equals four!\n");
        break;
    default:
        // this code is called if no value is matched against x
        printf("dunno!\n");
        break;
    }

    return 0;
}
```
Console output:
```
x equals two!
```
