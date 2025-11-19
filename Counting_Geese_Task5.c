#include<stdio.h>
int main()
//this code can be simplified,i did it in my own way (working with different variables for all th steps)
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

/*Mr. Poached Eggsy is the owner of a magical goose farm. A
magical goose only lays 13 platinum eggs at the beginning of the
year. The eggs take 6 months to hatch and another 6 months are
required for the goslings to mature. So, the new geese can lay
eggs right after one year. However, Mr. Eggsy sells half of all the
eggs each year to make his ends meet. In case he has odd
number of eggs, e.g. 15, he will sell 7 eggs and keep 8 eggs to
increase the number of geese in his farm.
Given the number of geese n at the beginning of first year as
input, calculate how many geese Mr. Eggsy will have after the 1st
year, 2nd year and 3rd year.*/

