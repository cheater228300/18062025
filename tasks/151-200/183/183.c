#include <stdio.h>

struct Point {
    double x;
    double y;
};

struct Rectangle {
    struct Point top_left;
    struct Point bottom_right;
};

double rectangle_area(struct Rectangle r) {
    return (r.bottom_right.x - r.top_left.x) * (r.top_left.y - r.bottom_right.y);
}

int main() {
    struct Rectangle r;
    printf("Enter top-left corner (x y): ");
    scanf("%lf %lf", &r.top_left.x, &r.top_left.y);
    printf("Enter bottom-right corner (x y): ");
    scanf("%lf %lf", &r.bottom_right.x, &r.bottom_right.y);
    
    double area = rectangle_area(r);
    if (area < 0) area = -area;
    printf("Rectangle area: %.2f\n", area);
    return 0;
}