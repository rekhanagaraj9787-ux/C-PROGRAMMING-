#include <stdio.h>

int main() {
    int salary,score;
    printf("enter the salary:");
    scanf("%d",&salary);
    printf ("enter the score:");
    scanf(" %d",&score);
    
    if(salary >=25000){
        if( score>=700){
            printf(" Loan Approved");
        }
        else {
            printf(" loan rejected due to lo creadit");
        }
        printf("Loan rejected salary");
    }
    else{
        
    
    printf (" loan rejected score");
    }
   
}