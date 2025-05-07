//W.A.P to print sum of even number from 1 to 50.
#include<stdio.h>
int main()
{
    int i=1,sum;
    while(i<=50){
        if(i%2==0){
            sum = sum +i;
        }
        i++;
    }
    printf("Sum of even number is %d",sum);
    return 0;
}

