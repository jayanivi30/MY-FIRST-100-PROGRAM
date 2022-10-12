#include<stdio.h>
int main()
{
   printf("RA2211042010055");
   int rad;
   float PI = 3.14, ci;
   printf("Enter radius of circle: \n");
   scanf("%d", &rad);
   ci = 2 * PI * rad;
   printf("Circumference : %f\n ", ci);
   return 0;
}
