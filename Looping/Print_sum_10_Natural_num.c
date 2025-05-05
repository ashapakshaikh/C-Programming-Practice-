//W.A.P to print sum of first 10 natural number
#include<stdio.h>
int main()
{
    int i=1,sum;
    while(i<=10){
        sum = sum+i;
        i++;
    }
    printf("Sum of first 10 natural number is %d",sum);
    return 0;
}