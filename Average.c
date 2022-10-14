#include<stdio.h>

int main()
{
     printf("RA2211042010055");
    int n, i;
    float sum = 0, x;
    printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum += x;
    }
    printf("Average of the entered numbers is =  %f", (sum/n));
    return 0;
}
