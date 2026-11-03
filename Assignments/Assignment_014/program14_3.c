#include<stdio.h>
#include<stdlib.h>

int NonFact(int iNo)
{
    int imult = 1;
    int icnt = 0;

     
   for(icnt = 1;icnt < iNo; icnt++)
    {
        if((iNo % icnt ) != 0)
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

    iRet = NonFact(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}