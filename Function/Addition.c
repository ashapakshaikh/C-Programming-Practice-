//W.A.P for addition of two numbers using function
#include<stdio.h>
void add();
int main(){
    add();
    return 0;
}
void add(){
    int a,b,add;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    add=a+b;
    printf("Addition of two number is %d",add);
}