// WAP to find out which office is smaller out of 2 offices ......

#include<stdio.h>
void main()
{
    int height1,breath1,height2,breath2,office1,office2;
    printf("\n Enter the value of height 1 : ");
        scanf("%d",&height1);
     printf("\n Enter the value of breath 1 : ");
        scanf("%d",&breath1);
    printf("\n Enter the value of height 2 : ");
        scanf("%d",&height2);
    printf("\n Enter the value of breath 2 : ");
     scanf("%d",&breath2);
    office1=height1*breath1;
    office2=height2*breath2;
if (office1<office2)
    {
        printf("The size of office1 is smaller");
    }
else
    {
       printf("The size of office2 is smaller"); 
    }
    printf("\n Good Bye..!!");
}