#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow ,int iCol)
{
    int i= 0,j =0;

    char ch ='\0';

    for(i =1; i <= iRow; i++)
    {
            if(i % 2 != 0)
            {
              for(j =1, ch = 'A' ; j <= iCol; j++,ch++)
              {
                printf("%c\t",ch);
              }
            }
            else
            {
                for(j = 1, ch = 'a' ; j <= iCol; j++,ch++)
                {
                   printf("%c\t",ch);
                }
            }
        
        printf("\n\n");
    }
}
int main()
{
  int iValue1 = 0,iValue2 = 0;

  printf("Enter number of rows and columns : \n");
  scanf("%d%d",&iValue1,&iValue2);

  pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}
