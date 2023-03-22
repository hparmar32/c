#include <stdio.h>
void main ()
{
         int number [10], count = 0, tamp, flash;
         while ( count < 10)
         {
               printf ("enter the number %d:", count + 1);
               scanf ("%d" , &number[count]);
               count++;
        }
        count = 0;
        do
        {
               printf ("\n number %d is %d", count + 1, number [ count ]);
               count++;
       } while (count< 10);
        for ( flash = 0; flash < 10; flash++)
      {
                for ( count = flash + 1; count<10;count ++)
               {
                        if (number [count]> number [flash] )
                       {
                              tamp = number [ flash ];
                              number [flash] = number [count];
                              number [count] = tamp;
                       }
                 }
         }
         printf ("\n\n");
         count = 0;
         do
         {
               printf ("\n number %d is %d", count + 1, number [count]);
               count++;
         } while ( count< 10);
}