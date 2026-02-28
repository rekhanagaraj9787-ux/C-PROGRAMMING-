#include <stdio.h>

int main() {
    float math,phy,che,sci,soci;
    float total,avg;
    scanf("%f %f %f %f %f ",&math,&phy,&che,&sci,&soci );
    
    total=math+phy+che+sci+soci;
    avg=(total)/5;
    
    printf("percentage=%.2f\n ",avg);
    
    if (avg>= 90)
        printf("Grade A\n");
    else if (avg>= 80)
        printf("Grade B\n");
    else if (avg >= 70)
        printf("Grade C\n");
    else if (avg >= 60)
        printf("Grade D\n");
    else if (avg>= 50)
        printf("Grade E\n");
    else if (avg<50)
        printf("Grade F\n");


}
    

