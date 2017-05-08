#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // old style for loop control structure:
    for (int i = 0; i < 10; i++) {
        /*
            Local variable i is created and only exist within for loop block
            scope. for loop code block is evaluated multiple times as long as
            predicate (i < 10) holds true. i is also incremented on each loop.
        */
        printf("%i\n", i);
    }

    // The for loop is just like a nicer while-loop

    /*
        The for loop is apparently not supposed to be used in favor of other
        loop types. These types will be quickly demonstrated here but not
        explained. Detailed explanation occur in dedicated examples.
    */

    // modern C++:
    {
        // This is basically a list of numbers (vectors will be explained in a dedicated example):
        std::vector<int> xs = { 4, 2, 3, 6, 9, 8 };

        // looping over xs using a function:
        for_each(begin(xs), end(xs), [](int x) {
            printf("x = %i\n", x);
        });

        // looping over xs using for each in (this is only specific to microsoft msvc compiler):
        for each (int x in xs)
            printf("x = %i\n", x);

        // this is the prefered way of looping over a list in modern C++
        for (int x : xs)
            printf("x = %i\n", x);

        // these methods are slower in performance unless you compile with optimizations enabled
    }

    return 0;
}
