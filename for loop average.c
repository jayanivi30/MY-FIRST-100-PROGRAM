#include<stdio.h>
void main(){
  printf("RA2211042010055");
    int n,sum=0;
    float average_value;
    for(n=1;n<6;n++)
    {
        printf("%d\n",n);
        sum+=n;
    }
    average_value=sum/5;
  
    printf("%f\n",average_value);
}
