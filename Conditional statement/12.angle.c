#include <stdio.h>

int main() {
    int angle;

    printf("Enter angle (0, 90, 180, 270): ");
    scanf("%d", &angle);

    switch(angle) {
        case 0:
            printf("Direction: East");
            break;
        case 90:
            printf("Direction: North");
            break;
        case 180:
            printf("Direction: West");
            break;
        case 270:
            printf("Direction: South");
            break;
        default:
            printf("Invalid Angle");
    }

    return 0;
}