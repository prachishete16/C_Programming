#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0.0f)
    {
        printf("Invalid purchase Amount\n");
        return;
    }
    if(fAmount >= 5000.0f)
    {
        fDiscount = 0.20f;
    }
    else if(fAmount >= 1000.0f)
    {
        fDiscount = 0.10f;
    }
    else 
    {
        fDiscount = 0.0f;
    }
    fFinalAmount = fAmount -(fAmount * fDiscount);
    printf("Payable Amount =%.2f\n",fFinalAmount);
}
int main( )
{
    float fAmount = 0.0f;
    int iAge = 0;

   printf("Enter purchase amount : \n");
   scanf("%f",&fAmount,&iAge);

   CalculateDiscount(fAmount);
    return EXIT_SUCCESS;
}