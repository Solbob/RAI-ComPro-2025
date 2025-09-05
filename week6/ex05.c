#include <stdio.h>

struct time {
    int min;
    int sec;
};

int main() {
    struct time t[3];
    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        scanf("%d:%d", &t[i].min, &t[i].sec);
}
    printf("Total time elasped: %d seconds", (t[0].min + t[1].min + t[2].min) * 60 + (t[0].sec + t[1].sec + t[2].sec));
    return 0;
}