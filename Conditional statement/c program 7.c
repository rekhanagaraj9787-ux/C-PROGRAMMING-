
#include <stdio.h>

int main()
{
    int age, citizen;

    printf("Enter Age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Are you Indian Citizen : ");
        scanf("%d", &citizen);

        if(citizen == 1)
        {
            printf("Eligible to Vote");
        }
        else
        {
            printf("Not Eligible - Not a Citizen");
        }
    }
    else
    {
        printf("Not Eligible - Age below 18");
    }

    return 0;
}

