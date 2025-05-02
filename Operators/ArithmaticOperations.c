// W.A.P. to perform all arithmatic operations in a single program.
#include<stdio.h>
int main()
{
    int a,b,answers;
    printf("Enter the two numbers:-");
    scanf("%d%d",&a,&b);
    answers=a+b;
    printf("Addition of a & b is :- %d",answers);
    answers=a-b;
    printf("\n Substraction of a & b is :- %d",answers);
    answers=a*b;
    printf("\n Multiplication of a * b is :- %d",answers);
    answers=a/b;
    printf("\n Division of a / b is :- %d",answers);
    answers=a%b;
    printf("\n Modulus of a % b is :- %d",answers);
    return 0;
}



