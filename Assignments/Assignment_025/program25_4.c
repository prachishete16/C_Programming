#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int bool;

bool Chksmall(char ch)
{
  
    if(ch >= 'a' && ch <= 'z')
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
   char cValue  = '\0';
   bool bRet = false;

  printf("Enter the character : \n");
  scanf(" %c",&cValue);

  bRet = Chksmall(cValue);

  if(bRet == true)
  {
    printf("it is  smallcase character \n");
  }
  else
  {
    printf("it is not a smallcase  character \n");
  }

    return EXIT_SUCCESS;
}