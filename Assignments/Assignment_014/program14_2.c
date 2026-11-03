#include<stdio.h>
#include<stdlib.h>

int FactRev(int iNo)
{
    int imult = 1;
    int icnt = 0;

     
   for(icnt = (iNo/2);icnt >= 1; icnt--)
    {
        if((iNo % icnt ) == 0)
        {
            printf("%d\t",icnt);
        } 
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactRev(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}