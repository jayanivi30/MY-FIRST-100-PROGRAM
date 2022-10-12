#include<stdio.h>
int main()
{
   printf("RA221104201055");
   int rad;
   float PI = 3.14, area;
   printf("Enter radius of circle: \n");
   scanf("%d", &rad);
   area = PI * rad * rad;
   printf("Area of circle : %f \n", area);
   return 0;
}
