// W.A.P. to compute quotient and remainder
#include<stdio.h>
int main()
{
    int num,Q,R;
    printf("Enter the number : ");
    scanf("%d",&num);
    Q=num/10;
    R=num%10;
    printf("The quotiet of %d =%d \n The remainder of %d = %d",num,Q,num,R);
}