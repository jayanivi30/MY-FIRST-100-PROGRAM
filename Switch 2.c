#include<stdio.h>
int main()
{
printf("RA2211042010055");
 printf("Enter Any Number Between (1 to 7):");
 scanf("%d",&choice);
 printf("\n");
 
 switch(choice)
 {
  case  1:
   printf("Today is Monday");
   break;
  case  2:
   printf("Today is Tuesday");
   break;
  case  3:
   printf("Today is Wednesday");
   break;
  case  4:
   printf("Today is Thursday");
   break;
  case  5:
   printf("Today is Friday");
   break;
  case  6:
   printf("Today is Saturday");
   break;
  case  7:
   printf("Today is Sunday");
   break;
  default:
  printf("Wrong Choice Try Again");
 }
 return 0;
}
