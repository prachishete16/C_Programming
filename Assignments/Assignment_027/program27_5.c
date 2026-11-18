#include<stdio.h>
#include<stdlib.h>

 void Reverse(char *str)
 {
    char *end = str;

    while(*end!= '\0')
    {  
            end++; 
    }
    end--;
    
    while(end >= str)
    {
        printf("%c",*end);
        end--;
    }
    printf("\n");
 }
int main()
{
    char arr[20];


  printf("Enter string : \n");
  scanf("%[^\n]",arr);

   Reverse(arr);
  
    return EXIT_SUCCESS;
}