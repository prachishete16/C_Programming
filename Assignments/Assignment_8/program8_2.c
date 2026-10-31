#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
     if( iNo < 0)
     {
        iNo = -iNo;
     }

     char*arr[] ={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
     if (iNo >= 0 && iNo <=9)
     {
        printf("%s",arr[iNo]);
     }
     else
     {
        printf("Invalid Number");
     }
   
}
int main()
{
     int iValue = 0;
     printf("Enter number : \n");
     scanf("%d",&iValue);

     Display(iValue);

     return EXIT_SUCCESS;
}