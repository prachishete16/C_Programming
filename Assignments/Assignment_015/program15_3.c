#include<stdio.h>
#include<stdlib.h>

typedef int bool;

#define true 1
#define false 0

bool Chkequal(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter number : \n");
    scanf("%d",&iValue1);

     printf("Please enter number : \n");
    scanf("%d",&iValue2);


    bRet = Chkequal(iValue1,iValue2);

    if(bRet == true )
    {
        printf("Equal");
    }
    else
    {
        printf("not equal");
    }

    return EXIT_SUCCESS;
}