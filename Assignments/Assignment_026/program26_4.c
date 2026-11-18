#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int bool;

bool Chkspecial(char ch)
{
  
    if(ch == '!' || ch == '@'|| ch == '#' || ch == '$' || ch == '%' ||ch == '^'||ch == '&'||ch == '*')
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

  bRet = Chkspecial(cValue);

  if(bRet == true)
  {
    printf("it is special character \n");
  }
  else
  {
    printf("it is not a special character \n");
  }

    return EXIT_SUCCESS;
}