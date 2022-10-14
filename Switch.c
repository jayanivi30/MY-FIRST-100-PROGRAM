#include<stdio.h>
int main()
{
printf("RA2211042010055");
char grade;
printf("Enter your grade:\n");
scanf("%c",&grade);
switch(grade)
{
case 'A':
printf("Exellent and outstanding\n");
break;
case 'B':
printf("Well done\n");
break;
case 'C':
printf("keep it up");
break;
case 'D':
printf("Do well next time");
break;
case 'F':
printf("better luck next time");
break;
default:
printf("Invalid grade");
}
return 0;
}
