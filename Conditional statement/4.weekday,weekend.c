#include <stdio.h>

int main() {
    int day;

    printf("Enter number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1: printf("Monday - Weekday");
        break;
        case 2: printf("Tuesday - Weekday");
        break;
        case 3: printf("Wednesday - Weekday"); 
        break;
        case 4: printf("Thursday - Weekday");
        break;
        case 5: printf("Friday - Weekday"); 
        break;
        case 6: printf("Saturday - Holiday"); 
        break;
        case 7: printf("Sunday - Holiday");
        break;
        default: printf("Invalid Number");
    }

    return 0;
}