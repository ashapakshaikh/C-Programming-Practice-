//Accept a number from user and print its factorial.
#include<stdio.h>
int main()
{
    int num,i=1,fact=1;
    printf("Enter the number");
    scanf("%d",&num);
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("the factorial number is %d",fact);
    return 0;
}