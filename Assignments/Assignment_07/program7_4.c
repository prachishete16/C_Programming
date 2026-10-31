#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
     int icnt = 0;
     for(icnt  = 1; icnt <= iNo; icnt++)
     {
        printf("%d\t",icnt);
        icnt++;
     }
}
int main()
{
     int iValue = 0;
     printf("Enter number : \n");
     scanf("%d",&iValue);

     OddDisplay(iValue);

     return EXIT_SUCCESS;
}