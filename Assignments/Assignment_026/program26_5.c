#include<stdio.h>
#include<stdlib.h>

 void Display(char ch)
 {
    int icnt = 0;

    printf("Decimal\t\t%d\n",ch);
    
    printf("octal\t\t0%o\n",ch);
    
    printf("HexaDecimal\t0X%X\n",ch);

 }
int main()
{
    char cValue  = '\0';

  printf("Enter the character : \n");
  scanf(" %c",&cValue);

  Display(cValue);

  
    return EXIT_SUCCESS;
}