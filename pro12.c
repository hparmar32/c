// WAP to bmi=kg/m*m

#include<stdio.h>
void main()
{
    float bmi,m,weight;
    printf("Enter the value of weight :  ");
        scanf("%f",&weight);
    printf("Enter the value of m :  ");
        scanf("%f",m);
        bmi=weight/(m*m);
        printf("Ans of BMI:%f",bmi);
}