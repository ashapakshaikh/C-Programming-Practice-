// Accept the numbers from users and swap the numbers without using third variable

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The value of a and b is : %d\t%d",a,b);
}