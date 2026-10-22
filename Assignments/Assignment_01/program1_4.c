#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name  :   Accept one number and to check it is divisible  by 5 or not
//    Input          :   Integer, Integer
//    Output         :   Integer
//    Description    :   Performs if esle using bool
//    Date           :   18/10/2026  
//    Author         :   Prachi Vijay Shete
//
///////////////////////////////////////////////////////////////////////////////////////
typedef int BOOL;

#define TRUE 1
#define FALSE -1

int BOOLCheck(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE ;
    }
}
int main ()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = BOOLCheck(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
     }
     return 0;
}