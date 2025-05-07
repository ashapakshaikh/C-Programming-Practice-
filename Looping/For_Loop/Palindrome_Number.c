//Accept num from user and check whether it is palindrome or not?
#include<stdio.h>
int main()
{
    int rev=0,rem,num,temp;
    printf("Enter the number");
    scanf("%d",&num);
    //int temp;
    temp=num;
    for(;num!=0;num=num/10){
        rem=num%10;
        //num=num/10;
        rev=(rev*10)+rem;   
    }

    //printf("temp%d\n",temp);
    //printf("rev%d",rev);
     if(temp== rev){
         printf("Number is palindrome");
     }else{
         printf("Number is not palindrome");
     }
    return 0;
}