//Swap Value Without Temp

#include <stdio.h>
int main()
{
	int Num1=1000, Num2=500;
	    Num1=Num1*Num2;
	    Num2 = Num1/Num2;
	    Num1=Num1/Num2;
	printf("Ans:-\nNum1=%d\nNum2=%d",Num1,Num2);
}