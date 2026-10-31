#include<stdio.h>
#include<stdlib.h>

int DiffFactorial(int iNo)
{
     if( iNo < 0)
     {
        iNo = -iNo;
     }
     int icnt = 0;
     int iEvenfact = 1;
     int iOddfact = 1;

     for(icnt  = iNo; icnt >= 1; icnt--)
     {
        if((icnt % 2)== 0)
        {
           iEvenfact = iEvenfact * icnt;
        }
        else
        {
           
           iOddfact = iOddfact * icnt;
        }
     }
    return (iEvenfact - iOddfact);
}
int main()
{
     int iValue = 0;
     int  iRet = 0;
     printf("Enter number : \n");
     scanf("%d",&iValue);

     iRet = DiffFactorial(iValue);

     printf(" difference betwwen  Factorial of number is %d",iRet);

     return EXIT_SUCCESS;
}