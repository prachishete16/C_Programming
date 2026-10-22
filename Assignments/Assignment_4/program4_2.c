#include<stdio.h>
#include<stdlib.h>

void  CheckEvenOdd(int iValue)
{
    if((iValue % 2) == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}