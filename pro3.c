// Millenium year ex 1000,2000,3000,4000

#include<stdio.h>
void main ( )
{
       int year;
       printf ("Enter the year : ");
       scanf("%d",&year);
           if (year%1000==0)
            {
                 printf(" It is millenium year");
             }
           else
            {
             printf(" It is not millenium year");
            }
}