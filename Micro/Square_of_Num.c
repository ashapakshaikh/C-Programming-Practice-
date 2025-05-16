//Nest the micro Square in another macro CUBE to find the cube of number.
#include<stdio.h>
#include<math.h>
#define SQUARE(a) (a)*(a)
#define CUBE(x) ((x)*(SQUARE(x)))
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
   // C=CUBE(num);
    printf("The Cube of number is : %d",CUBE(num));
    return 0;

}