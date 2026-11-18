#include<stdio.h>
#include<stdlib.h>

 int Countcapital(char *str)
 {
    int icnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

  iRet = Countcapital(arr);

  printf("%d\n",iRet);
  
    return EXIT_SUCCESS;
}