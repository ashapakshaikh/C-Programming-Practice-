// Accept a number from user and print its multiplication table.
#include<stdio.h>
int main()
{
    int num,i=1,Mul;
    printf("Enter the number");
    scanf("%d",&num);
    for(;i<=10;i++){
        Mul=num*i;
        printf("%d\n",Mul);
    }
    return 0;
}