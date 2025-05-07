//Accept a number from user and print its factorial.
#include<stdio.h>
int main()
{
    int num,i=1,fact=1;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;        
    }
    printf("the factorial number is %d",fact);
    return 0;
}