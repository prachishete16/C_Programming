#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
  while(*str != '\0')
  {
    if(*str >= 'A' && *str <= 'Z')
    {
        *str = *str + ('a' - 'A');
    }
    str++;
  }
}
int main()
{
   char arr[50];

  printf("Enter string: \n");
  scanf("%[^'\n']s",arr);

  strlwrx(arr);

  printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}