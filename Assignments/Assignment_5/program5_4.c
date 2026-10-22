#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{

    if((iValue % 5 == 0) && (iValue % 3 == 0))
    {
        printf("Number is divisible by both");
    }
     else if(iValue % 3 == 0)
    {
        printf("Number is divisible by  3 only");
    }
     else if((iValue % 5 == 0))
    {
        printf("Number is divisible by 5 only");
    }
    else
    {
       printf("Number is  not divisible by Either");
    }

}
int main(void)
{
    int iValue = 0;

    printf("Enter marks : \n");
    scanf("%d",&iValue);

      CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}