//WAP to findout how many days in month

#include <stdio.h>
void main()
{
    int month;
    printf("Enter the month:");
    scanf("%d",&month);
    if (month<=12 && month>=1)//
    {
        if (month==1 || month==3 || month==5 || month==7 || month==8 ||month==10 || month==12)
            {
            printf("31 Days");
            }
                else if (month==2)
                {
                 printf("28/29 Days");
                }
            else
                {
                printf("30 Days");
                }
            printf("\n Good Bye...");
        }
}