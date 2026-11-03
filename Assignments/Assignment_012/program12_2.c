#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int bool;
bool Checkzero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo /10;
    }
        return false;   
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

   bRet = Checkzero(iValue);

   if(bRet == true)
   {
    printf("It contains zero");
   }
   else
   {
    printf("There is no zero");
   }

    return EXIT_SUCCESS;
}