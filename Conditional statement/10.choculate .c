#include <stdio.h>

int main() {
    int total, perDay, days;

    printf("Enter total chocolates: ");
    scanf("%d", &total);

    printf("Enter consumption per day: ");
    scanf("%d", &perDay);

    printf("Enter planned days: ");
    scanf("%d", &days);

    if(perDay * days <= total)
        printf("1");   
    else
        printf("0");   

    return 0;
}