#include<stdio.h>
int main(void) {
 
    double 𝜋=3.141593;
    double degree,answer;
    printf("Enter the degree= ");
    scanf("%lf",&degree);
 answer= degree*𝜋/180.0;
printf("The Radian is = %.4lf",answer);
return 0;
}