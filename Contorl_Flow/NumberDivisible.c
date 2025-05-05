// Accpet a number from user and check is divsible by 5.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:-");
    scanf("%d",&num);
    if(num%5==0){
        printf("Number is divisible by 5");       
    }else{
        printf("Number is not divisible by 5");
    }
    return 0;
}