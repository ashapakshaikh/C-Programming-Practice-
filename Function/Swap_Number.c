//
#include<stdio.h>

void swap();

int main(){
    swap();
    return 0;
}
void swap(){
    int a,b,c;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("swaping of two number are a=%d and b=%d",a,b);
    
}