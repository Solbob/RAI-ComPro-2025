#include <stdio.h>

struct vector {
    float i;
    float j;
};

int main() {
    struct vector v[2];
    for (int p = 0; p < 2; p++) {
        printf("i%d: ", p+1);
        scanf("%f", &v[p].i);
        printf("j%d: ", p+1);
        scanf("%f", &v[p].j);
    }
    printf("Resultant vector is equvalence to %.2fi + %.2fj\n",
        v[0].i + v[1].i, v[0].j + v[1].j);
    return 0;
}