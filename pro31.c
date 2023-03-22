//WAP to find average and sum for 10 employe salery

#include <stdio.h>
void main ()
{
    int emp[10] , count=0 , sum ;
    float avg ;

    for (count = 0 ; count < 10; count++)
    {
        printf("\n Enter salery of employe %d :",count + 1);
        scanf("%d",&emp[count]);
        
    }
    for (count=0;count<10;count++)
    {
        printf("\n employ salery %d are : %d ",count + 1,emp[count]);
    }
    sum=0;
    for (count=0 ; count<10 ; count++)
    {
        sum=sum+emp[count];

    }
    printf("\n Total of salery %d",sum);
    avg=sum/10;
    printf("\n Average of salery is %.2f",avg);
    printf(" \n Done");
}