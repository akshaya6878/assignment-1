#include<stdio.h>
int main()
{
    float price,discount_percentage,discount_amount,discount_price;
    printf("enter the price of item");
    scanf("%f",&price);
    printf("enter the discount percentage of item");
    scanf("%f",&discount_percentage);
    discount_amount=(discount_percentage*price)/100;
    printf("discount amount is %f\n",discount_amount);
    discount_price=(price-discount_amount);
    printf("discount price is %f\n",discount_price);
    return 0;
    
    
}
