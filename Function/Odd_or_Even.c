//W.A.F. that accept a number as a parameter and prints if it is odd or even?
#include<stdio.h>

void Odd_Even(int num);

int main(){
    int num;
    printf("Enter the number:-");
    scanf("%d",&num);
    Odd_Even(num);
    return 0;
}
void Odd_Even(int num){
    if(num%2==0){
        printf("Number is even");
    }else{
        printf("Number is odd");
    }
}