//Accept number from user and check is prime or not.
#include<stdio.h>
int main(){
    int num,i=2,flag=1;
    printf("Enter the number");
    scanf("%d",&num);
    for(;i<=num/2;i++){
        if(num%i==0){
            flag=0;
            break;
        }      
    }
    if(flag==1){
        printf("Prime Number");
    }else{
        printf("Not prime number"); 
    }
    return 0;
}