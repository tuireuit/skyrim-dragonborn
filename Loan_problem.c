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


/*ABC Bank Ltd. provides loans to its customers. The customers return the amount by a fixed monthly payment. On each month however, the remaining balance is incremented by the
interest rate assigned for each customer. The total balance at the end of each month can be
calculated using the following formula:
currBalance = prevBalance - pay + (prevBalance × rate)

Here,
currBalance = Updated Balance
prevBalance = Previous Balance
pay = Monthly Payment
rate = Monthly Interest Rate

Your task is to write a program that calculates the remaining payable amount on a loan after
the first, second, and third monthly payment. 

Your program will take the loan amount, yearly interest rate (in percent), fixed monthly payment as input. You need to display each balance with two digits after the decimal point. 

Sample Run:
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
*/


}

