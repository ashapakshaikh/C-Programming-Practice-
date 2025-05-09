//print a num from 1 to 100 in reverse order;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,num,rem=0,rev=0;
    char ch;
    do{
        printf("\nEnter your choice\n");
        printf("A.Reverse a number \n B.Serial Number \n C.Swap Number \n D.Factorial Number \n E.Exit");
        scanf("%c",&ch);
        switch(ch){
            case 'A':
                     printf("Enter the number");
                     scanf("%d",&num);
                     while(num!=0){
                            rem=num%10;
                            rev=rev*10+rem;
                            num=num/10;
                     }
                     printf("Reverse number=%d",rev);
                     break;
            case 'B':
                     printf("Kindly provide starting number and end number");
                     break;
            case 'E':
                     exit(0);
                     break;

        }

    }
    while(ch='E');
    return 0;
}