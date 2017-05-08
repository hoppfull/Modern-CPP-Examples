#include <iostream>

int main() {
    int x = 5;

    char cs[] = "hello"; // unsafe string

    std::string s("yo"); // safe modern string

    float f = 3.14;

    std::printf("x = %i\n", x);
    std::printf("cs = \"%s\"\n", cs);
    // printf doesn't work natively with the std::string-type:
    std::printf("s = \"%s\"\n", s.c_str());
    std::printf("f = %f\n", f);

    // local scope:
    {
        // variables a and b are destroyed when this block goes out of scope
        int a = 4;
        int b = 7;
        std::printf("%i + %i = %i\n", a, b, a + b);
    }
    // calling a or b from this point would not work

    // const forces immutability:
    const int y = 5; // y cannot be reassigned

    return 0;
}
