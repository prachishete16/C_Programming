#include<stdio.h>
#include<stdlib.h>

 int Countsmall(char *str)
 {
    int icnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            icnt++;
        }
        str++;
    }
    return icnt;
 }
int main()
{
    char arr[20];
    int iRet = 0;

  printf("Enter string : \n");
  scanf("%[^\n]",arr);

  iRet = Countsmall(arr);

  printf("%d\n",iRet);
  
    return EXIT_SUCCESS;
}