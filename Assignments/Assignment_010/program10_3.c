#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
     int  iRet  = 0;
     iRet = iNo * 1000;
     return iRet;

}
int main()
{
    int iValue= 0 ;
    int  iRet = 0;

     printf("Enter distance: \n");
     scanf("%d",&iValue);

     iRet = KMtoMeter(iValue);

     printf("converted meter is : %d",iRet);

     return EXIT_SUCCESS;
}