#include<stdio.h>
int main()
{
    float Basic,HRA,DA,PF,GrossSalary,NetSalary;

    printf("Enter the Basic Salary of Employee:-");
    scanf("%f",&Basic);

    HRA = Basic*0.20;
    DA = Basic*0.40;
    GrossSalary = Basic + HRA + DA;
    PF = GrossSalary*0.10;
    NetSalary = GrossSalary - PF;

    printf("HRA:-%f",HRA);
    printf("\nDA:-%f",DA);
    printf("\nGross Salary:-%f",GrossSalary);
    printf("\nPF:-%f",PF);
    printf("\nNetSalary:-%f",NetSalary);
    return 0;
}