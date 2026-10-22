#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name  :   Accept one number from user and print that number of * on screen
//    Input          :   Integer, Integer
//    Output         :   *
//    Description    :   Performs if esle using bool
//    Date           :   18/10/2026  
//    Author         :   Prachi Vijay Shete
//
////////////////////////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt =1; iCnt<=5 ;iCnt++ )
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}