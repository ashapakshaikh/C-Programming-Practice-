// W.A.F. to check whether the three digit number is an armstrong number.
// If it is print the message Armstrong numb else it is not
// Accept a number from user in main
#include<stdio.h>

void Armstrong(int num,int temp);

int main(){
    int num,temp;
    printf("Enter the number to check is armstrong or not:- ");
    scanf("%d",&num);
    temp=num;
    Armstrong(num,temp);
    return 0;
}
void Armstrong(int num,int temp){
    int rem=0,cube=0,arm=0;
    for(;num!=0;num/=10){
        rem=num%10;
        //num=num/10;
        cube = rem*rem*rem;
        arm=arm+cube;
    }
   // printf("Temp=%d",temp);
   // printf("\n arm=%d",arm);

    if(arm==temp){
        printf("Armstrong number");
    }else{
        printf("Not Armstrong Number");
    }
}
