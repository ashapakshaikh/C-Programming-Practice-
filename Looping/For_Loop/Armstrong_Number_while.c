//Accept num from user and check is armstrong or not?
#include<stdio.h>
int main()
{
    int num=0,rev=0,rem=0,cube=0,temp=0,arm=0;
    printf("Enter the number");
    scanf("%d",&num);
    temp=num;
    for(;num!=0;num/=10){
        rem=num%10;
        num=num/10;
        cube = rem*rem*rem;
        arm=arm+cube;
    }
    if(arm==temp){
        printf("Armstrong number");
    }else{
        printf("Not Armstrong Number");
    }
    return 0;
}