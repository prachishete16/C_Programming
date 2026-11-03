#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart , int iEnd)
{

    int icnt = 0;
    int isum = 0;
    if ((iStart < 0) || (iStart > iEnd))
    {
        printf("Inavlid range\n");
        return 0;
    }
    for(icnt = iStart ; icnt <=iEnd ; icnt++)
    {
        isum  = isum + icnt ;
    }
    return isum;
    
}
int main()
{
    int iValue1 = 0 ,iValue2 = 0 , iRet = 0;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

     iRet =RangeSum(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return EXIT_SUCCESS;
}