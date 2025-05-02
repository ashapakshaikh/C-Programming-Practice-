// Check number is between 1 to 100 0r not using conditional operator.
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number:-");
    scanf("%d",&number);
    ((number>=1) && (number<=100))?printf("Number is in between 1 to 100 and it is :-%d",number):printf("Number is not between 1 to 100 and it is:-%d", number);
    return 0;
}