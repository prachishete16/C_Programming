#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
     int icnt = 0;
     for(icnt  = -4; icnt <= iNo; icnt++)
     {
        printf("%d\t",icnt);
     }
}
int main()
{
     int iValue = 0;
     printf("Enter number : \n");
     scanf("%d",&iValue);

     Display(iValue);

     return EXIT_SUCCESS;
}