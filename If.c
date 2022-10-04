#include <stdio.h>

int main() {
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    if(num>10)
    printf("the number is greater than 10\n");
    else if(num==10)
    printf("the number is equal to 10\n");
    else
    printf("the number is less than 10");

    return 0;
}
