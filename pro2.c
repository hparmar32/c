//User Input Swap Value - With Scanf..

#include <stdio.h>
int main() 
{
    int Num1=1000, Num2=500; 
    printf("Enter Value of Num1:   "); 
    scanf("%d", &Num1); 
    printf("\nEnter Value of Num2:   "); 
    scanf("%d", &Num2); 
    int temp = Num1; 
    Num1 = Num2; 
    Num2 = temp; 
    printf("\n Swap: Num1= %d, Num2 = %d", Num1, Num2); 
}