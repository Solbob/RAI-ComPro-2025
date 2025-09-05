#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student {
    char name[20];
    int id, math, eng, sci, hist;
    float avg;

};

int main() {
    struct student s[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades of student %d: ", i+1);
        scanf("%s %d %d %d %d %d", s[i].name, &s[i].id, &s[i].math, &s[i].eng, &s[i].sci, &s[i].hist);
    }
    printf("Student Averages:\n");
    for (int i = 0; i < 3; i++) {
        s[i].avg = (s[i].math + s[i].eng + s[i].sci + s[i].hist) / 4;
        printf("%s (ID: %d): %.2f\n", s[i].name, s[i].id, s[i].avg);
    }
    if (s[0].avg > s[1].avg && s[0].avg > s[2].avg) {
        printf("Top Student: %s with %.2f\n", s[0].name, s[0].avg);
    } else if (s[1].avg > s[0].avg && s[1].avg > s[2].avg) {
        printf("Top Student: %s with %.2f\n", s[1].name, s[1].avg);
    } else {
        printf("Top Student: %s with %.2f\n", s[2].name, s[2].avg);
    }
    printf("Subject Averages:\n");
        float avgm = (s[0].math + s[1].math + s[2].math) / 3.0;
        float avge = (s[0].eng + s[1].eng + s[2].eng) / 3.0;
        float avgs = (s[0].sci + s[1].sci + s[2].sci) / 3.0;
        float avgh = (s[0].hist + s[1].hist + s[2].hist) / 3.0;
    printf("Math: %.2f\n", avgm);
    printf("English: %.2f\n", avge);
    printf("Science: %.2f\n", avgs);
    printf("History: %.2f\n", avgh);
    if (avgm > avge && avgm > avgs && avgm > avgh) {
        printf("Top Subject: Math with average %.2f", avgm);
    } else if (avge > avgm && avge > avgs && avge > avgh) {
        printf("Top Subject: English with average %.2f", avge);
    } else if (avgs > avgm && avgs > avge && avgs > avgh) {
        printf("Top Subject: Science with average %.2f", avgs);
    } else {
        printf("Top Subject: History with average %.2f", avgh);
    }
    

    return 0;
}