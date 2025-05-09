//W.A.F. of factorial which accept number a parameter and print the factorial of number in a main method.
#include<stdio.h>
int Fact(int num);

int main(){
    int num;
    printf("Enter the number:-");
    scanf("%d",&num);
    int F=Fact(num);
    printf("The factorial of number is :- %d",F);
    return 0;
}

int Fact(int num){
    int F=1,i;
    for(i=1;i<=num;i++){
        F=F*i;
    }
    //printf("%d",F);
    return F;
}
