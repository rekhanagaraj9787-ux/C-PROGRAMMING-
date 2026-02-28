#include <stdio.h>

int main() {
    float total, percentage;
    float m1,m2,m3,m4,m5;
    scanf( "%f %f %f %f %f",&m1,&m2,&m3, &m4,&m5);
    total=m1+m2+ m3+ m4+ m5;
    percentage=(total)/5;

  
    if (percentage >= 95)
        printf("Grade A\n");
    else if (percentage >= 85)
        printf("Grade B\n");
    else if (percentage >= 75)
        printf("Grade C\n");
    else if (percentage >= 65)
        printf("Grade D\n");
    else if (percentage >= 45)
        printf("Grade E\n");
    else
        printf("Grade F\n");

    return 0;
}