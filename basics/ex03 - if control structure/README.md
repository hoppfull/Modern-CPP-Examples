## ex03 - if control structure
Demonstration of the if control structure
```c++
#include <iostream>

// this statement allows us to omit "std::" in this source file
using namespace std;

int main() {
    int x = 3;

    if (x < 3) {
        // if the statment (x < 3) holds true, evaluate this code block
        printf("x is less than 3!\n");
    } else if (x > 3) {
        // else if the statement (x > 3) holds true, evaluate this code block
        printf("x is greater than 3!\n");
    } else {
        // else, evaluate this code block
        printf("x is neither less than or greater than 3...\n");
    }

    // code block is not necessary if code consists of a single statment:
    if (x == 3)
        // if the statment (x == 3) holds true, perform following statement:
        printf("x equals 3!\n");

    return 0;
}
```
