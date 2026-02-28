#include <stdio.h>

int main() {
    float salary, bonus, final_salary;
    char gender;

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Gender (M/F): ");
    scanf(" %c", &gender);

    if (gender == 'M' || gender == 'm')
        bonus = salary * 0.05;
    else if (gender == 'F' || gender == 'f')
        bonus = salary * 0.10;
    else {
        printf("Invalid Gender");
        return 0;
    }

    final_salary = salary + bonus;

    printf("Bonus = %.2f\n", bonus);
    printf("Final Salary = %.2f", final_salary);

    return 0;
}