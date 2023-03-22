

#include <stdio.h>
void main ()
{
    int unit,price,amount;
    printf("enter value of unit:");
    scanf("%d",&unit);
 if(unit<100)
 {
    price=1;
 }
 else if(unit>=100 && unit<200)
    {
        price=2;
    }
    else if(unit>=300 && unit<400)
    {
        price=3;
    }
    else if(unit>=400 && unit<500)
    {
        price=4;
    }
    else
    {
        price=5;
    }
    amount=price*unit;
    printf("Total amount to pay %d",amount);
    
 }