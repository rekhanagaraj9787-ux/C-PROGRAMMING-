#include <stdio.h>

int main() {
    int age;
    float tuition, expenses;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter annual tuition fee: ");
    scanf("%f", &tuition);

    printf("Enter total annual expenses: ");
    scanf("%f", &expenses);

    if (age >= 18 && age <= 25) {
        printf("Age is valid.\n");

        if (tuition > expenses)
            printf("Tuition fee is greater than total expenses.\n");
        else
            printf("Total expenses are greater or equal to tuition fee.\n");
    } else {
        printf("Age not in eligible range (18-25).\n");
    }

    return 0;
}