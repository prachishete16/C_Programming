#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int bool;

bool Chkvowel(char *str)
{
    while(*str != '\0')
    {

    if(*str  == 'a' || *str  == 'e'|| *str  == 'i' ||*str  == 'o'||*str  == 'u'||
    *str  == 'A' || *str  == 'E'|| *str  == 'I' ||*str  == 'O'||*str  == 'U')
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
   bool bRet = false;

  printf("Enter the string : \n");
  scanf("%[^\n]",arr);

  bRet = Chkvowel(arr);

  if(bRet == true)
  {
    printf("it is vowels\n");
  }
  else
  {
    printf("it is not a vowels \n");
  }

    return EXIT_SUCCESS;
}