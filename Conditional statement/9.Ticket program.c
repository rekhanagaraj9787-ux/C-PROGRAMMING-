#include <stdio.h>

int main() {
    int age;
    float price;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age <= 12) {
        price = 100;   // Children
        printf("Category: Children\n");
    }
    else if(age <= 19) {
        price = 150;   // Teenagers
        printf("Category: Teenagers\n");
    }
    else if(age <= 60) {
        price = 200;   // Adults
        printf("Category: Adult\n");
    }
    else {
        price = 120;   // Seniors (61+)
        printf("Category: Senior\n");
    }

    printf("Ticket Price: %.2f\n", price);

    return 0;
}