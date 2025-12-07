#include <stdio.h>

int main() {
    int a[4];
    double answer;
    scanf("%d", &a[0]);
    scanf("%d", &a[1]);
    scanf("%d", &a[2]);
    scanf("%d", &a[3]);
    answer = a[0]*a[3] - a[1]*a[2];
    
    printf("%.6f",answer);
    return 0;
}

