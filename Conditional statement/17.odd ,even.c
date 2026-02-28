#include <stdio.h>

int main() {
    int a, b, product;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    product = a * b;

    if (product % 2 == 0) {
        printf("Product is Even.\n");
        printf("Result after dividing by 2: %d\n", product / 2);
    } else {
        printf("Product is Odd.\n");
        printf("Result after dividing by 3: %d\n", product / 3);
    }

    return 0;
}