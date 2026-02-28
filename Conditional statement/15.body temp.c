#include <stdio.h>

int main() {
    float temp;

    printf("Enter your body temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp >= 37.0) {
        printf("You have a fever.\n");
    } else {
        printf("You do not have a fever.\n");
    }

    return 0;
}