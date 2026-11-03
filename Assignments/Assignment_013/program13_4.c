#include<stdio.h>
#include<stdlib.h>

int MultiDigit(int iNo)
{
    int iDigit = 0;
    int imul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            imul = imul * iDigit;
        }
        iNo = iNo /10; 
    }
    return imul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultiDigit(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}