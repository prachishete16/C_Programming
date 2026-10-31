#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
     double  dFhtoCs = 0.0;
     dFhtoCs = ((fTemp-32) * (5.0/9.0));
     return dFhtoCs;

}
int main()
{
    float fValue = 0.0 ; 
    double dRet = 0.0;

     printf("Enter Temperature in Fahrenheit: \n");
     scanf("%f",&fValue);


     dRet = FhtoCs(fValue);

     printf(" converted celsius is : %lf",dRet);

     return EXIT_SUCCESS;
}