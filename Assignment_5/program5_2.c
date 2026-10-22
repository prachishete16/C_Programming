#include<stdio.h>
#include<stdlib.h>

void CheckLeapyear(int iyear)
{
    {
    if(iyear <= 0 )
    {
        printf("Invalid year\n");
    }
    else if((iyear % 400 ==0) ||(iyear % 4 == 0 && iyear % 100 != 0))
    {
        printf("Leap year \n");
    }
    else
    {
        printf("Not a leap year \n");
    }
}
}
int main()
{
    int iYear = 0;

    printf("Enter year : \n");
    scanf("%d",&iYear);

    CheckLeapyear(iYear);

    return EXIT_SUCCESS;
}