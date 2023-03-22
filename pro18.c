// example of array

#include <stdio.h>
void main ()
{
    //declaringa arrey
    int students[5],count;
    //inut using arrey
    for (count=0;count<5;count++)
    {
        printf("\n Enter marks of students %d :",count + 1);
        scanf("%d",&students[count]);
        
    }
    //outputusing arrey
    for (count=0;count<5;count++)
    {
        printf("\n Marks of students %d are : %d ",count + 1,students[count]);
    }
}