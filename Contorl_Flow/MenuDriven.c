// W.A.P. Menu driven 
// 1) Even or Odd
// 2) +ve or -ve
// 3) Square of number
// 4) Max between two numbers
#include<stdio.h>
int main()
{
    int s,num1,num2,ch;
    printf("Please select the below menu for operations\n 1) Even or Odd \n 2) +ve or -ve \n 3) Square of number \n 4) Max between two numbers \n");
    scanf("%d",&ch);
    

    switch(ch)
    {
        case 1: printf("Please enter numbers:-");
                scanf("%d",&num1);
               (num1%2==0)?printf("Number is even"):printf("Number is odd");
                break;
        case 2: printf("Please enter numbers:-");
                scanf("%d",&num1);
                (num1>0)?printf("Number is positive"):printf("Number is Negative");
                break;
        case 3:printf("Please enter numbers:-");
                scanf("%d",&num1);
                s=num1*num1;
                printf("The square of number is %d",s);
                break;
        case 4: printf("Please enter the two numbers:-");
                 scanf("%d%d",&num1,&num2);
                 (num1>num2)?printf("num1 is grater than num2"):printf("num2 is grather than num1");
                 break;
        default: printf("wrong choice");
                 break;

                
    }
    return 0;
}