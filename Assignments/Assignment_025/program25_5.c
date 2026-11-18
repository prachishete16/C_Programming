#include<stdio.h>
#include<stdlib.h>

void DisplayscheduleDiv(char chDiv)
{
  
    if(chDiv == 'A' || chDiv == 'a')
    {
       printf("your exam is at 7 AM\n");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
       printf("your exam is at 8.30 AM\n");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
       printf("your exam is at 9.20 AM\n");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
       printf("your exam is at 10.30 AM\n");
    }
    else
    {
        printf("invalid divison\n");
    }
}
int main()
{
   char cValue  = '\0';

  printf("Enter your division : \n");
  scanf(" %c",&cValue);

  DisplayscheduleDiv(cValue);

  return EXIT_SUCCESS;
}