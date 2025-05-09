//W.A.F. that finds the square of a number pass as an argument to it.
// The function shoulf print the result.
#include<stdio.h>
void Square(int num);

int main (){
    int num;
    printf("Enter the number:-");
    scanf("%d",&num);
    Square(num);
    return 0;
}

void Square(int num){
    int square;
    square=num*num;
    printf("Square of number is %d=%d",num,square);
}