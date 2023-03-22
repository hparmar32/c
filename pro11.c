// WAP to accept number of month from user and show month name

#include <stdio.h>
void main ()
{
    int month;
    printf("Enter the month :   ");
    scanf("%d",&month);
    if(month==1)
    {
        printf("JANUARY month 31 days");
    }
        else if (month==2)
        {
            printf("FEBRUARY month 28/29 days");
        }
        else if (month==3)
        {
            printf("MARCH month 31 days");
        }
        else if (month==4)
        {
            printf("APRIL month 30 days");
        }
        else if (month==5)
        {
            printf("MAY month 31 days");
        }
        else if (month==6)
        {
            printf("JUNE month 30 days");
        }
        else if (month==7)
        {
            printf("JULY month 31 days");
        }
        else if (month==8)
        {
            printf("AUGUST month 31 days");
        }
        else if (month==9)
        {
            printf("SEPEEMBER month 30 days");
        }
        else if (month==10)
        {
            printf("OCTOBER month 31 days");
        }
        else if (month==11)
        {
            printf("NOVEMBER month 30 days");
        }
        else if (month==12)
        {
            printf("DECEMBER month 31 days");
        }
    else
    {
        printf("\n invalid ");
    }
}