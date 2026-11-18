#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
  
    if(ch >= 'A' && ch <= 'Z')
    {
       printf("%c\n",ch +('a'- 'A'));
    }
    else if(ch >= 'a' && ch <= 'z')
    {
       printf("%c\n",ch -('a'- 'A'));
    }
    else
    {
       printf("%c\n",ch);
    }
}
int main()
{
   char cValue  = '\0';

  printf("Enter the character : \n");
  scanf(" %c",&cValue);

  Display(cValue);

  return EXIT_SUCCESS;
}