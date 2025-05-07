//Accept number from user and check is prime or not.
#include<stdio.h>
int main(){
    int num,i=2,flag=1;
    printf("Enter the number");
    scanf("%d",&num);
    while(i<=num/2){
        if(num%i==0){
            flag=0;
            break;
        }
        i++;
    }
    if(flag==1){
        printf("Prime Number");
    }else{
        printf("Not prime number"); 
    }
    return 0;
}