//WAP to digit n word
//number=5;
//five

#include<stdio.h>
void main ()
{
int number,first,second;
printf("Enter the number");
scanf("%d",&number);
first=number/10;
second=number%10;
    //printf("first : %d",first);
    //printf("\n second :%d",second);
        if(first==1)
            {
                printf("one");
             }
                    else if (second==2)
                 {
                    printf("two");
                 }
                 else if (second==3)
                 {
                    printf("three");
                 } 
                 else if (second==4)
                {
                     printf("four");
                } 
                else if (second==5)
                {
                    printf("five");
                } 
                else if (second==6)
                {
                    printf("six");
                 } 
                else if (second==7)
                 {
                    printf("seven");
                 } 
                else if(second==8)
                 {
                    printf("eight");
                 }
                else if(second==9)
                {
                    printf("nine");
                }
                else if (second==10)
            {
                    printf("ten");
               }
         else
             {
                printf("invalid value");
             }  
 }