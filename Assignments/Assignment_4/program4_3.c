#include<stdio.h>
#include<stdlib.h>

void  FindGreater(int iFirst , int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("Maximum is : %d\n",iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("Maximum is : %d\n",iSecond);
    }
    else
    {
        printf("Both Numbers are equal : %d\n",iFirst,iSecond);
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;


    printf("Enter  two number : \n");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}