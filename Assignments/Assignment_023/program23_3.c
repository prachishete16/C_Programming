#include<stdio.h>
#include<stdlib.h>

void strtogglex(char *str)
{
  while(*str != '\0')
  {
    if(*str >= 'A' && *str <= 'Z')
    {
        *str = *str + ('a' - 'A');
    }
    else if(*str >= 'a' && *str <= 'z')
    {
        *str = *str - ('a' - 'A');
    }
    str++;
  }
}
int main()
{
   char arr[20];

  printf("Enter string: \n");
  scanf("%[^'\n']s",arr);

  strtogglex(arr);

  printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}