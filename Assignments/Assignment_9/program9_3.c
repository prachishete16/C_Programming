#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
     if( iNo < 0)
     {
        iNo = -iNo;
     }
     int icnt = 0;
     int ifact = 1;

     for(icnt  = iNo; icnt >= 1; icnt--)
     {
        if((icnt % 2)== 0)
        {
           ifact = ifact * icnt;
        }
    
     }
     return ifact;
   
}
int main()
{
     int iValue = 0;
     int  iRet = 0;
     printf("Enter number : \n");
     scanf("%d",&iValue);

     iRet = EvenFactorial(iValue);

     printf(" Even Factorial of number is %d",iRet);

     return EXIT_SUCCESS;
}