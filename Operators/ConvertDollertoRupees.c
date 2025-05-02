// W.A.P to accept doller amounts and convert into rupees.
#include<stdio.h>
int main()
{
    float rupees,dollers;
    printf("Please enter the dollers to convert into rupees:-");
    scanf("%f",&dollers);
    rupees = dollers*83.85;
    printf("The doller amount is converted and it is doller=%f$ to Ruppes=%fINR.",dollers,rupees);
    return 0;
}