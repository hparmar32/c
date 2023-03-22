//WAP to print name from user (Copy 25 only)

#include <stdio.h>
void main ()
{
    char name[25];
    int count=0,copy;
    printf("Enter your name:- ");
    for (count = 0;count<25;count++)
    {
        scanf("%c",&name[count]);
        if (name[count]== '\n')
        {
            break;
        }
    }
    copy=count;
    printf("\n Your name is \n");
    for(count=0;count<=copy;count++)
    {
        printf("%c",name[count]);
    }
}