#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int iNo)
{
    int isum = 0;
    int icnt = 0;

     
   for(icnt = 1;icnt < iNo; icnt++)
    {
        if((iNo % icnt ) != 0)
        {
            isum = isum + icnt;
        } 
    }
    return isum ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}