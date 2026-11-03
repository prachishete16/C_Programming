#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart , int iEnd)
{

    int icnt = 0;
    
    if ((iStart < 0) || (iStart > iEnd))
            {
                printf("Inavlid range\n");
            
            }
    for(icnt = iStart ; icnt <=iEnd ; icnt++)
    {
          printf("%d\t",icnt);
    }
}
int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}