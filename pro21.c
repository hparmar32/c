//WAP to find distance of planets from sun

#include <stdio.h>
void main()
 {
    int earth=91961000,ans,option;
    printf(" Mercury 1:\n Venus 2:\n Earth 3:\n Mars 4:\n Jupitor 5:\n Saturn 6:\n Uranus 7:\n Neptune 8:");
    printf("\n \n Select the number of planet : ");
    scanf("%d",&option);
    
    switch(option)
    {
    case 1:
         ans=sun-(-57900000);
         printf(" \n Sun to Mercury %d",ans);
         break;
    case 2:
         ans=sun-(-108200000);
         printf(" \n Sun to Venus %d",ans);
         break;
     case 3:
         ans=sun-(-149600000);
         printf(" \n Sun to Earth %d",ans);
         break;
     case 4:
         ans=sun-(-227900000);
         printf(" \n Sun to Mars %d",ans);
         break;
     case 5:
         ans=sun-(-778600000);
         printf("\n Sun to Jupitor %d",ans);
         break;
     case 6:
         ans=sun-(-1433500000);
         printf("\n Sun to Saturn %d",ans);
         break;
     case 7:
         ans=sun-28725000;
         printf("\n Sun to Uranus %d",ans);
         break;
      case 8:
         ans=sun-57900000;
         printf("\n Sun to Neptune %d",ans);
         break;
        
      default:
          printf("\n Invalid Option");
          break;
       }
        printf("\n \n Good Bye...!!");
 }