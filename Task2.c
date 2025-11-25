#include<stdio.h>

int main()
{
  
    float x;
    printf("Enter the value of x= ");
    scanf("%f",&x);
    float y=(3*x*x*x*x*x)-(2*x*x*x*x)+(5*x*x*x)+(x*x)-(7*x)+6;
    printf("Value of the polynomial for x= %.2f",y);
    return 0;




}