#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name  :   Accept two  number from user and display first no. in second no. of times
//    Input          :   -2
//    Output         :   0
//    Description    :   Performs true or false 
//    Date           :   18/10/2026  
//    Author         :   Prachi Vijay Shete
//
/////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEvent(int iNo)
{

    if(iNo % 2 == 0)
    {
        printf("Number is even\n");
        return TRUE;
    }
    else
    {
        printf("Number is odd\n");
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    bRet = ChkEvent(iValue);

    return EXIT_SUCCESS;
}