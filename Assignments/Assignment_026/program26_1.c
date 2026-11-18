#include<stdio.h>
#include<stdlib.h>

 void DisplayASCII()
 {
    int icnt = 0;

    printf("Dec\tHex\tOct\tChar\n");
    printf("-----------------------------");
    
    for(icnt = 0;icnt <= 255;icnt++)
    {
        printf("%d\t%X\t%o\t%c\n",icnt,icnt,icnt,icnt);
    }
 }
int main()
{
    DisplayASCII();
   
    return EXIT_SUCCESS;
}