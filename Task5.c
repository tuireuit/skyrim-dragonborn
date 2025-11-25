#include<stdio.h>

int main()
{
      float loan_amount,interest_rate,monthly_payment,cur_balance;
      printf("Enter amount of loan:");
       scanf("%f",&loan_amount);
       printf("Enter interest rate:");
        scanf("%f",&interest_rate);
        float monthly_interest=(interest_rate/100)/12;
        printf("Enter monthly payment:");
        scanf("%f",&monthly_payment);
 
       float a= loan_amount-monthly_payment+(monthly_interest*loan_amount);
       printf("Balance remaining after first payment: %.2f",a);
       float b= a-monthly_payment+(monthly_interest*a);
       printf("Balance remaining after second payment: %.2f",b);
       float c= b-monthly_payment+(monthly_interest*b);
       printf("Balance remaining after third payment: %.2f",c);





}
