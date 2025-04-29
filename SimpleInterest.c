//Accept the principle amount,rate of interest and time from user and calculate simple interest.
#include<stdio.h>
int main()
{
    float SI,PA,RA,T;
    printf("Enter the Principle Amount:-");
    scanf("%f",&PA);
    printf("Enter the Rate of Interest:-");
    scanf("%f",&RA);
    printf("Enter the Time:-");
    scanf("%f",&T);

    SI=(PA*RA*T)/100;
    printf("Simple Interest:- %f",SI);  
   return 0; 
}