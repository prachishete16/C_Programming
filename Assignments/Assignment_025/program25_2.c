#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int bool;

bool ChkCapital(char ch)
{
  
    if(ch >= 'A' && ch <= 'Z')
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

  bRet = ChkCapital(cValue);

  if(bRet == true)
  {
    printf("it is capital \n");
  }
  else
  {
    printf("it is not a capital \n");
  }

    return EXIT_SUCCESS;
}