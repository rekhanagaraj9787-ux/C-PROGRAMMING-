#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");

  
    if (scanf("%d", &age) != 1) {
        printf("Invalid input! Please enter a number.");
        return 0;
    }

    
    if (age < 0) {
        printf("Invalid age! Age cannot be negative.");
    }
    else if (age <= 5) {
        printf("Recommended Food: Mashed vegetables or Soft fruits");
    }
    else if (age <= 12) {
        printf("Recommended Food: Milk, Eggs, Fruits");
    }
    else if (age <= 18) {
        printf("Recommended Food: Burgers or Pasta");
    }
    else if (age <= 50) {
        printf("Recommended Food: Rice, Chapati, Vegetables, Protein-rich food");
    }
    else {
        printf("Recommended Food: Soup or Grilled Fish");
    }

    return 0;
}