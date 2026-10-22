#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name  :   Accept one number from user  if no. is less than 10 then print "Hello" otherwise print "Demo" 
//    Input          :   Integer, Integer
//    Output         :   Hello or Demo
//    Description    :   Performs if  esle 
//    Date           :   18/10/2026  
//    Author         :   Prachi Vijay Shete
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
       printf("Demo");
    }
}
int main()
{
    int iValue =0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
