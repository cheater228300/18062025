#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

double distance(struct Point p1, struct Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

int main() {
    struct Point p1, p2;
    printf("Enter coordinates of first point (x y): ");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("Enter coordinates of second point (x y): ");
    scanf("%lf %lf", &p2.x, &p2.y);
    
    printf("Distance between points: %.2f\n", distance(p1, p2));
    return 0;
}