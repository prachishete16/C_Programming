#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int icnt = 0;
    int isumfact = 0;
    int isumnonfact = 0;

      
   for(icnt = 1;icnt < iNo; icnt++)
    {
         
        if(iNo % icnt == 0)
        {
            isumfact = isumfact + icnt;
        }
        else
        {
            isumnonfact = isumnonfact + icnt;
        }
    }
    return (isumfact - isumnonfact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}