#include <stdio.h>

struct Point {
    double x;
    double y;
};

void print_point(struct Point p) {
    printf("Point: (%.2f, %.2f)\n", p.x, p.y);
}

int main() {
    struct Point p;
    printf("Enter coordinates of point (x y): ");
    scanf("%lf %lf", &p.x, &p.y);
    
    print_point(p);
    return 0;
}