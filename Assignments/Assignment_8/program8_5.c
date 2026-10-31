#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
     int icnt = 0;

     if( iNo < 0)
     {
        iNo = -iNo;
     }

     for(icnt = 10;  icnt >= 1; icnt--)
     {
        printf("%d\t",iNo * icnt);
     }
}
int main()
{
     int iValue = 0;
     printf("Enter number : \n");
     scanf("%d",&iValue);

     TableRev(iValue);

     return EXIT_SUCCESS;
}