//W.A.P to print sum of even number from 1 to 50.
#include<stdio.h>
int main()
{
    int i=1,sum;
    for(;i<=50;i++){
        if(i%2==0){
            sum = sum +i;
        }        
    }
    printf("Sum of even number is %d",sum);
    return 0;
}

