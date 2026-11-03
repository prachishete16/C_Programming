#include<stdio.h>
#include<stdlib.h>


int  Multiply(int iNo1, int iNo2,int iNo3)
{
    int imul = 0;
   
        imul = iNo1 * iNo2 *iNo3;
    return imul;

}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int  iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue1);

     printf("Please enter number : \n");
    scanf("%d",&iValue2);

    printf("Please enter number : \n");
    scanf("%d",&iValue3);


    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d\n",iRet);

    return EXIT_SUCCESS;
}