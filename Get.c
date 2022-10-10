#include<stdio.h>

int main()
{
    char str[50];   
    printf("Enter your complete name:\n");
    gets(str);
    printf("Welcome %s\n",str);
    return 0;
}
