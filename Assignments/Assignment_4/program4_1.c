#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{

    if(iValue > 0 )
    {
       printf("Number is positive");
    }
    else if(iValue < 0)
    {
      printf("Number is negative");
    }
    else
    {
        printf("Numebr is zero");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}