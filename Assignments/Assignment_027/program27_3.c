#include<stdio.h>
#include<stdlib.h>

 int Difference(char *str)
 {
    int icntsmall = 0;
    int icntcapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            icntsmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            icntcapital++;
        }
        str++;
    }
    return (icntsmall - icntcapital);
 }
int main()
{
    char arr[20];
    int iRet = 0;

  printf("Enter string : \n");
  scanf("%[^\n]",arr);

  iRet = Difference(arr);

  printf("%d\n",iRet);
  
    return EXIT_SUCCESS;
}