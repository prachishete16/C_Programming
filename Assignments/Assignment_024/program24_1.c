#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int bool;

bool ChkChar(char *str,char ch)
{
  while(*str != '\0')
  {
    if(*str == ch)
    {
        return true;
    }
    str++;
  }
  return false;
}
int main()
{
   char arr[20];
   char cValue ;
   bool bRet = false;

  printf("Enter string: \n");
  scanf("%[^'\n']s", arr);

  printf("Enter the character : \n");
  scanf(" %c",&cValue);

  bRet = ChkChar(arr,cValue);

  if(bRet == true)
  {
    printf("character found\n");

  }
  else
  {
     printf("character  not found\n"); 
  }

    return EXIT_SUCCESS;
}