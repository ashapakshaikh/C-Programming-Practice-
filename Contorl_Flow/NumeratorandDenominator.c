// Accpet a numerator and denominator from user and perform division and print result 
// only if denominator is not zero else print denominator can not be zero.
#include<stdio.h>
int main(){
    int num,denum;
    printf("Enter the numerator:-");
    scanf("%d",&num);
    printf("Enter the denominator:-");
    scanf("%d",&denum);
    if(num%denum==0){
        printf("The denominator result is");       
    }else{
        printf("Number is not divisible by 5");
    }
    return 0;
}