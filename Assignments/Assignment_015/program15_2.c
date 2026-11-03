#include<stdio.h>
#include<stdlib.h>

typedef int bool;

#define true 1
#define false 0

bool CheckGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if(bRet == true )
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS;
}