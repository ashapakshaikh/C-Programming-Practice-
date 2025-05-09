#include<stdio.h>
int add(int a,int b);

int main(){
    int a,b;
    printf("Enter the value of a and b ");
    scanf("%d%d",&a,&b);
    int sum=add(a,b);
    printf("Addition of two numbers :- %d",sum);
    return 0;
}
int add(int a,int b){
    int addition;
    addition=a+b;
    return addition;
}