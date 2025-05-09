//W.A.F. that prints wether a number passed as parameter is divisible by 5.
// Accept number from user in main method
#include<stdio.h>

void Divisible(int num);

int main(){
    int num;
    printf("Enter the number:-");
    scanf("%d",&num);
    Divisible(num);
    return 0;
}

void Divisible(int num){  
    (num%5==0)?printf("Number is divisible by 5"):printf("Number is not divisible by 5");
}
