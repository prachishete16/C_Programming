#include<stdio.h>
#include<stdlib.h>

int MulFact(int iNo)
{
    int imult = 1;
    int icnt = 0;

     
   for(icnt = 1;icnt <= (iNo/2); icnt++)
    {
        if((iNo % icnt ) == 0)
        {
            imult = imult * icnt;
        } 
    }
    return imult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}