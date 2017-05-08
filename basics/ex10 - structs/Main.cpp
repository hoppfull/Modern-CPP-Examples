#include <iostream>

// globally defined data structure:
struct point {
    int x;
    int y;
};

int main() {
    // locally defined data structure:
    struct disc {
        point center; // datastructure inside this datastructure
        float radius;
    } world; // a single instance of disc is immediately created (world)

    point p0;

    p0.x = 5;
    p0.y = 6;

    point p1 = { 7, 0 };

    world.center = p0; // data is copied!
    world.radius = 3.14;

    p0.x = -1;

    printf("p0.x = %i\n", p0.x);
    printf("p0.y = %i\n", p0.y);

    printf("p1.x = %i\n", p1.x);
    printf("p1.y = %i\n", p1.y);

    printf("world.center.x = %i\n", world.center.x);
    printf("world.center.y = %i\n", world.center.y);
    printf("world.radius = %f\n", world.radius);

    disc dsc = { {10, 12}, 7.28 };

    printf("dsc.center.x = %i\n", dsc.center.x);
    printf("dsc.center.y = %i\n", dsc.center.y);
    printf("dsc.radius = %f\n", dsc.radius);

    return 0;
}
