
#include<math.h>
#include<stdio.h>
int main()
{
   double x1,x2,y1,y2;


  printf("Enter x1 and y1:");
        scanf("%lf %lf",&x1,&y1);
        printf("Enter x2 and y2");
        scanf("%lf %lf",&x2,&y2);
double manhattan=fabs(x2-x1)+fabs(y2-y1);
double euclidean=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
printf("Manhattan distance: %lf",manhattan);
printf("Euclidean distance: %lf",euclidean);
return 0;

}
  


