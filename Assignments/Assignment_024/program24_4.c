#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str,char ch)
{
    int iCnt = 0;
    int ipos = -1;

  while(*str != '\0')
  {
    if(*str == ch)
    {
        ipos = iCnt;
    }
    iCnt++;
    str++;
  }
  return ipos;
}
int main()
{
   char arr[20];
   char cValue ;
   int iRet = 0;

  printf("Enter string: \n");
  scanf("%[^'\n']s", arr);

  printf("Enter the character : \n");
  scanf(" %c",&cValue);

  iRet = LastChar(arr,cValue);

  printf("Character frequency is : %d\n",iRet);

    return EXIT_SUCCESS;
}