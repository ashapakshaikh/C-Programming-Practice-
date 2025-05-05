// Accept a number from user and print its multiplication table.
#include<stdio.h>
int main()
{
    int num,i=1,Mul;
    printf("Enter the number");
    scanf("%d",&num);
    while(i<=10){
        Mul=num*i;
        printf("%d\n",Mul);
        i++;
    }
    return 0;
}