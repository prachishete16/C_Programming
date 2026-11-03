#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart , int iEnd)
{

    int icnt = 0;
    if ((iStart < 0) || (iStart > iEnd))
            {
                printf("Inavlid range\n");
            
            }
    for(icnt = iStart ; icnt <=iEnd ; icnt++)
    {
        if(icnt % 2 == 0)
        {
          printf("%d\t",icnt);
        }
    }
}
int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);
    

    return EXIT_SUCCESS;
}