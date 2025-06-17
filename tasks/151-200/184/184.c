#include <stdio.h>
#include <stdbool.h>

struct Point {
    double x;
    double y;
};

struct Rectangle {
    struct Point top_left;
    struct Point bottom_right;
};

bool rectangles_intersect(struct Rectangle r1, struct Rectangle r2) {
    return (r1.top_left.x <= r2.bottom_right.x &&
            r1.bottom_right.x >= r2.top_left.x &&
            r1.top_left.y >= r2.bottom_right.y &&
            r1.bottom_right.y <= r2.top_left.y);
}

int main() {
    struct Rectangle r1, r2;
    printf("Enter first rectangle top-left (x y): ");
    scanf("%lf %lf", &r1.top_left.x, &r1.top_left.y);
    printf("Enter first rectangle bottom-right (x y): ");
    scanf("%lf %lf", &r1.bottom_right.x, &r1.bottom_right.y);
    printf("Enter second rectangle top-left (x y): ");
    scanf("%lf %lf", &r2.top_left.x, &r2.top_left.y);
    printf("Enter second rectangle bottom-right (x y): ");
    scanf("%lf %lf", &r2.bottom_right.x, &r2.bottom_right.y);
    
    if (rectangles_intersect(r1, r2)) {
        printf("Rectangles intersect\n");
    } else {
        printf("Rectangles do not intersect\n");
    }
    
    return 0;
}