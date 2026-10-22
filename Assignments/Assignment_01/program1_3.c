#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//  
//    Function Name  :   To print 5 to 1 numbers on screen
//    Input          :   Integer, Integer
//    Output         :   Integer
//    Description    :   Performs while loop
//    Date           :   18/10/2026  
//    Author         :   Prachi Vijay Shete
//
///////////////////////////////////////////////////////
 void Display()
 {
    int i = 0;
      i = 5;
    while(i >= 1)
    {
        printf("%d", i );
        i--;
    }
 }
 int main()
 {
    Display();
    return EXIT_SUCCESS;
 }