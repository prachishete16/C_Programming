#include<stdio.h>
#include<stdlib.h>

double Squaremeter(int iValue)
{
     double iRet = 0.0;
     iRet = iValue * 0.092903;
     return iRet;

}
int main()
{
    int iValue = 0; 
    double dRet = 0.0;

     printf("Enter area in square feet: \n");
     scanf("%d",&iValue);


     dRet = Squaremeter(iValue);

     printf(" converted square meter  is : %lf",dRet);

     return EXIT_SUCCESS;
}