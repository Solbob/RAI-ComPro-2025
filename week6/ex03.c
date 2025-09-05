#include <stdio.h>
#include <math.h>

struct point {
    float x;
    float y;
};

int main() {
    struct point p[2];
    for (int i = 0; i < 2; i++) {
        printf("x%d: ", i+1);
        scanf("%f", &p[i].x);
        printf("y%d: ", i+1);
        scanf("%f", &p[i].y);
    }
    printf("Distance between (%f, %f) and (%f, %f) is: %.2f\n",
        p[0].x, p[0].y, p[1].x, p[1].y,
        sqrt(pow(p[1].x - p[0].x, 2) + pow(p[1].y - p[0].y, 2)));
    return 0;
}