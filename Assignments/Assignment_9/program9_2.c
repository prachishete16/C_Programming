#include<stdio.h>
#include<stdlib.h>

int DollartoINR(int iNo)
{
     if( iNo < 0)
     {
        iNo = -iNo;
     } 
     int iAns = 0;

     iAns = iNo * 70;
     
     return iAns;
   
}
int main()
{
     int iValue = 0;
     int  iRet = 0;
     printf("Enter number : \n");
     scanf("%d",&iValue);

     iRet = DollartoINR(iValue);

     printf("Value in INR is %d",iRet);

     return EXIT_SUCCESS;
}