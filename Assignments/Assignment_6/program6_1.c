#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iunits)
{
    float fbill = 0.0f;
    if(iunits < 0)
    {
        printf("Invalid unit consumption\n");
        return;
    }
    if(iunits <=100)
    {
        fbill = iunits * 5.0f;
    }
    else if(iunits <=200)
    {
        fbill = (100 * 5.0f)+((iunits - 100)*7.0f);
    }
    else
    {
        fbill = (100 * 5.0f)+(100 * 7.0f)+((iunits - 200)*10.f);
    }
    printf("Bill = %.2f\n",fbill);

}

int main()
{
   int iUnits = 0;

   printf("Enter consumed units: \n");
   scanf("%d",&iUnits);

   CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}