#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name  :   Accept one number from user and print that number of * on screen
//    Input          :   Integer, Integer
//    Output         :   *
//    Description    :   Performs while loop using updater
//    Date           :   18/10/2026  
//    Author         :   Prachi Vijay Shete
//
/////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
   int iCnt = 0;
    //updater
    {
       if(iNo < 0)
       {
         iNo = -iNo;
       }
     while(iCnt < iNo)
       {
           printf("*");
            iCnt++;
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}