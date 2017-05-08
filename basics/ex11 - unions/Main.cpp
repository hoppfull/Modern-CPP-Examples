#include <iostream>

int main() {
    // a union is like a struct except all members occupy same physical memory:
    union my_union {
        int x; // 32 bit
        short y; // 16 bit
    };
    // a union occupies as much memory as its largest member, in this case 32 bit

    my_union u = { pow(2, 16) + 5 };

    printf("u.x = %i\n", u.x);
    printf("u.y = %i\n", u.y);

    // a change in one means all fields are seemingly affected
    u.x = 3;

    printf("u.x = %i\n", u.x);
    printf("u.y = %i\n", u.y);

    union my_union_2 {
        int x; // 32 bit
        struct {
            short a; // 16 bit
            short b; // 16 bit
        }; // 32 bit
    };

    my_union_2 u2 = { pow(2, 17) + 5 };

    printf("u2.x = %i\n", u2.x);
    printf("u2.a = %i\n", u2.a);
    printf("u2.b = %i\n", u2.b);

    return 0;
}
