#include<stdio.h>
int main()
{
    int n;
    printf("The number of geese at start= ");
    scanf("%d",&n);
    int m=n*13;
    int x=m-(m/2);
    printf("Geese after first year=%d",x+n);
    int a=x+n;
    int b=a*13;
    int c=b-(b/2);
    printf("Geese after second year=%d",a+c);
    int f=a+c;
    int g=f*13;
    int h = g-(g/2);
    printf("Geese after third year=%d",f+h);
}