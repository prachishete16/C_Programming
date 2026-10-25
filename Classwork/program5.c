/*
  step 1: understand the problem statment.
  step 2: write the Algorithm.
  step 3:Decide the programming language. 
  step 4:write the program.
  step 5:Test the program.
*/

///////////////////////////////////////////////////////
//
// step 1: Understand the problem statment. 
//         user is going to enter any 2 integer 
//         And we have to perform addition
///////////////////////////////////////////////////////

////////////////////////////////////////////////////////
//
// step 2: write the algorithm
/*
   START
      Accept first number as NO1
      Accept second number as NO2
      Create the variable as ANS to store the variable
      Perform the addition and store into ANS
      Display the result from ANS
      END
*/
////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
//
//step 3:Decide the programming language.
//        we select C programming
// /////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
// step 4:write the program.
//
///////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////
//  
//    Function Name  :   Addition
//    Input          :   Integer, Integer
//    Output         :   Integer
//    Description    :   Performs addition
//    Date           :   4/10/2026  
//    Author         :   Prachi Vijay Shete
//
///////////////////////////////////////////////////////

int  Addition(int iNO1, int iNO2)
{
    int iAns = 0;

    iAns = iNO1 + iNO2;    //Business logic
    return iAns;
}

///////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////

int main()
{
    int iValue1 =0, iValue2 = 0 , iResult = 0;

    printf("Enter First number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2) ;   

    printf(" Addition is :%d\n",iResult);  
    
    return 0;
}

///////////////////////////////////////////////////////
//
//  step 5: Test the program
//  --------------------------------
//    Tested test case
//----------------------------------
//     Input1     Input2   Output
//----------------------------------
//      10         11       21
//      11         0        11
//      0          11       11
//     20          -9       11
//     -9         20        11
//      -20       -11       -31
//
///////////////////////////////////////////////////////