//WAP to find elecricity bill....

#include <stdio.h>
void main ()
{
    int unit,price,amount;
    printf("enter value of unit:");
    scanf("%d",&unit);
 if(unit<100)
 {
    price=4.15;
 }
 else if(unit>=100 && unit<150)
    {
        price=8.30;
    }
    else if(unit>=150 && unit<300)
    {
        price=12.36;
    }
    else if(unit>=300 && unit<450)
    {
        price=16.48;
    }
    else
    {
        price=20.06;
    }
    amount=price*unit;
    printf("Total amount to pay %d",amount);
 }