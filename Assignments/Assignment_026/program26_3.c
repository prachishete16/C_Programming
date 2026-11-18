#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    char ccnt = '\0';
  
    if(ch >= 'A' && ch <= 'Z')
    {
      for(ccnt = ch ;ccnt <= 'Z' ; ccnt++)
      {
         printf("%c\t",ccnt);
      }
       printf("\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
      for(ccnt = ch ;ccnt >= 'a' ; ccnt--)
      {
         printf("%c\t",ccnt);
      }
       printf("\n");
    }
    else
    {
       return;
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