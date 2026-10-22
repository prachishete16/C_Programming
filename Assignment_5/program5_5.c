#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{

    if(cValue >= 'A' &&  cValue <= 'Z')
    {
        printf("UpperCase Alphabets \n");
    }
     else if(cValue >= 'a' &&  cValue <='z' )
    {
        printf("LowerCase Alphabets \n");
    }
     else if(cValue >='0' &&  cValue <=  '9')
    {
        printf("Digits \n");
    }
    else
    {
       printf("Special charaters");
    }

}
int main(void)
{
    char cvalue= '\0';

    printf("Enter character : \n");
    scanf("%c",&cvalue);

      CheckCharacterType(cvalue);

    return EXIT_SUCCESS;
}