//WAP to find average and sum for 5 students marks

#include <stdio.h>
void main ()
{
    int student[5] , count=0 , sum ;
    float avg ;

    for (count = 0 ; count < 5; count++)
    {
        printf("\n Enter marks of students %d :",count + 1);
        scanf("%d",&student[count]);
        
    }
    for (count=0;count<5;count++)
    {
        printf("\n Marks of students %d are : %d ",count + 1,student[count]);
    }
    sum=0;
    for (count=0 ; count<5 ; count++)
    {
        sum=sum+student[count];

    }
    printf("\n Total of marks %d",sum);
    avg=sum/5;
    printf("\n Average of student is %.2f",avg);
    printf(" \n GOOD BYE..");
}