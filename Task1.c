#include<stdio.h>

int main()
{
     
    float amount,VAT_added_amount;
    printf("Enter an amount=$");
    scanf("%f",&amount);
    VAT_added_amount=(amount+(amount*0.05));
    printf("With VAT added: %.2f",VAT_added_amount);
    return 0;


}