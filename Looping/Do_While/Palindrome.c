//Accept num from user and check whether it is palindrome or not?
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rev=0,rem,num,temp;
    char ch;
    do{
    printf("Enter the number");
    scanf("%d",&num);
    //int temp;
    temp=num;
   
        rem=num%10;
        num=num/10;
        rev=(rev*10)+rem;   
    

    //printf("temp%d\n",temp);
    //printf("rev%d",rev);
     if(temp== rev){
         printf("Number is palindrome\n");
     }else{
         printf("Number is not palindrome\n");
     }
    //  printf("\n do you want to check another number Y/N");
    //  scanf("%c",&ch);
    } while(num!=0);
    return 0;
}