#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart , int iEnd)
{
    int icnt = 0;
    int isum = 0;
    
    if ((iStart < 0) || (iEnd < 0) ||(iStart > iEnd))
    {
        printf("Inavlid range\n");
    }
    for(icnt = iStart ; icnt <=iEnd ; icnt++)
    {
        if(icnt % 2 == 0)
        {
          isum = isum + icnt;
        }
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

    iRet = RangeSumEven(iValue1,iValue2);
    
    printf("The Addition is : %d",iRet);
    

    return EXIT_SUCCESS;
}