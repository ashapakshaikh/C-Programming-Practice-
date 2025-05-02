// W.A.P. to accept number from user and check is -ve or +ve.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number to check is negative or positive:-");
    scanf("%d",&num);
    (num >0)?printf("Entered number is positive"):printf("Entered number is negative");
    return 0;
}