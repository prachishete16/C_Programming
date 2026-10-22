#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears )
{
    float fBouns = 0.0f;

    if (fSalary<= 0.0f || iYears < 0)
    {
        printf("Invalid Input\n");
        return;
    }
     if (iYears > 10)
    {
        fBouns = fSalary * 0.15f;
    }
    else if(iYears >=5)
    {
        fBouns = fSalary * 0.10f;
    }
    else
    {
        fBouns = fSalary * 0.05f;
    }
    printf("Bonus = %.2f\n",fBouns);
}
int main()
{
    float fsalary = 0.0f;
    int iyears = 0;
  
  printf("Enter salary and years of services:");
  scanf("%f %d",&fsalary, &iyears);

  CalculateBonus(fsalary ,iyears);

    return EXIT_SUCCESS;
}