#include<stdio.h>
void main(){
  printf("RA2211042010055");
   int n,i,odd;
   printf("enter the num: \n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       odd=(2*i)-1;
     printf("the odd numbers are : %d\n",odd);
   }
}
