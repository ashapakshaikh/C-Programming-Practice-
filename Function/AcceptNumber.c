//W.A.F. with name AcceptNumber which will accept integer from user and display it in function only
// call the function from main()
#include<stdio.h>

void AcceptNumber();

int main(){
    AcceptNumber();
    return 0;
}

void AcceptNumber(){
    int num;
    printf("Enter the number:-");
    scanf("%d",&num);
    printf("User Entered number is :- %d",num);
}