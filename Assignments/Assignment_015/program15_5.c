#include<stdio.h>
#include<stdlib.h>


float Percentage(int itotal, int iobatained)
{
    if(itotal == 0)
    {
        return 0.0f;
    }
    float fAns = 0.0f;
     fAns = ((float)iobatained /(float)itotal) * 100.0f;

    return fAns;

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue1);

     printf("Please enter number : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is : %f\n",fRet);

    return EXIT_SUCCESS;
}