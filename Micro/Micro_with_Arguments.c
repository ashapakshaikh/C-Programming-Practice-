// How to define micro
#include<stdio.h>
#define SQUARE(a) (a)*(a)
int main(){
    int x=3;
    printf("%d\n",SQUARE(x));

    printf("%d",SQUARE(x+2));
    return 0;
}