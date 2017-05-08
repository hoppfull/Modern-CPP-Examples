## ex12 - enums
Basic demonstration of enums
```c++
#include <iostream>

// an enum is like a collection of related labels
enum colours {
    Red, // each label is implicitly associated with an int
    Green = 7, // a label can be explicitly associated with an int
    Blue
};

int main() {
    colours colour = colours::Green;

    if (colour == colours::Red)
        colour = colours::Blue;

    printf("colour = %i\n", colour);

    return 0;
}
```
Console output:
```
colour = 7
```
