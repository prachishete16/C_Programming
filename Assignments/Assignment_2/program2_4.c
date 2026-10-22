#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name  :   Accept two  number from user and display first no. in second no. of times
//    Input          :   12 5
//    Output         :   12 12 12 12 12
//    Input          :   -2  3
//    Output         :   -2 -2 -2 
//    Input          :   -2 0
//    Output         :   ?
//    Description    :   Performs if  esle 
//    Date           :   18/10/2026  
//    Author         :   Prachi Vijay Shete
//
/////////////////////////////////////////////////////////////////////////////////////////

int Display(int iNo, int iFrequency)
{
    int i = 0;
    if(iFrequency < 0)
    {
        iFrequency= -iFrequency;
    }

    for(i = 0; i < iFrequency ; i++)
    {
        printf("%d\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Frequency\n");
    scanf("%d",&iValue);

    printf("Enter Frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return EXIT_SUCCESS;
}


