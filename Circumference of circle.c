#include<stdio.h>
int main()
{
   int rad;
   float PI = 3.14, ci;

   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);

   return 0;
}
