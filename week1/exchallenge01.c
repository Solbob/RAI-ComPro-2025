#include <stdio.h>

int main(){
    
    printf("+----------------+--------+--------+");
    printf("\n%-16s", " Name");
    printf("%s", " | Score1 |");
    printf("%s", " Score2 |");
    printf("\n+----------------+--------+--------+");
    printf("\n%-16s", " Alice");
    printf("%2s", "|");
    printf("%7d", 85);
    printf("%2s", "|");
    printf("%7d", 90);
    printf("%2s", "|");
    printf("\n%-16s", " Bob");
    printf("%2s", "|");
    printf("%7d", 78);
    printf("%2s", "|");
    printf("%7d", 82);
    printf("%2s", "|");
    printf("\n%-16s", " Charlie");
    printf("%2s", "|");
    printf("%7d", 92);
    printf("%2s", "|");
    printf("%7d", 88);
    printf("%2s", "|");
    printf("\n+----------------+--------+--------+");








    return(0);
}