//WAP to print following pattern...
// 2,1,3,4,7,11,18,28,47,76,76,123,.......3220

#include<stdio.h>
void main ()
{
    int first=2,second=1,count=0;
    printf("%d" , first);
    printf("%d" , second);
for(count=0;second<1364;count=0);
    {
     first=first+second;
       printf("%d" , first);
     second = first + second;
       printf("%d" , second);
    }
}