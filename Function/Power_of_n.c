// Calculate power of a number.both power and number should be accept from user and pass to the function.
// The result shold be print in the main
#include<stdio.h>

int power(int num,int pow); // Initalizing the function

int main(){
    int num,pow;
    printf("Enter the number and power:- ");
    scanf("%d%d",&num,&pow);
    int p = power(num,pow); // calling the function
    printf("The %d number with power %d = %d",num,pow,p);
    return 0;
}

int power(int num, int pow){
    int p=1,i;
    for(i=0;i<pow;i++){
        p=p*num;
    }  
    return p;
}