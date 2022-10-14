#include <stdio.h>
int main()
{
printf("RA2211042010055");
int i,fact=1,num;
printf("enter a number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
fact=fact*i;
printf("the factorial of %d is %d",num,fact);
return 0;
}
