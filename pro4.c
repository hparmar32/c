//WAP to findout grater number out of given

#include <stdio.h>
void main()
{
    int a,b,c;
    printf("\n Enter the value of A : ");
    scanf("%d",&a);
    printf("\n Enter the value of B : ");
    scanf("%d",&b);
    printf("\n Enter the value of C : ");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("A is greter");
    }
         else if (b>c && b>a)
             {
             printf("B is greter");
             }
         else if (c>a && c>b)
             {
                printf("C is grater");
             }
    else
    {
        printf("All are same");
    }
    printf("\n Good bye ...");
}