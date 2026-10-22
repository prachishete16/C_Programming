#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fmarks,int iage)
{
    if(fmarks < 0.0f || fmarks > 100.0f || iage < 0)
    {
        printf("Invalid Input\n");
        return;
    }
    if(fmarks >= 60.0f &&  iage >= 17)
    {
        printf("Eligible for Admission \n");
    }
    else
    {
        printf("Not Eligible for Admission \n");
    }
}
int main()
{
    float FMarks = 0.0f;
    int iAge = 0;

   printf("Enter marks and age : \n");
   scanf("%f %d",&FMarks,&iAge);

   CheckAdmission(FMarks,iAge);

    return EXIT_SUCCESS;
}