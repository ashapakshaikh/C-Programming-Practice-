//Write a program to accept rainfall in mm over a period of 1 week and display the average.
#include<stdio.h>
int main(){
    int a[7],sum=0,avg=0,i=0;

    printf("Enter the rainfall in mm of 7 days");
    for(i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++){
        sum=sum+a[i];
    }
    //printf("Sum of total=%d\n",sum)
    avg=sum/7;
    printf("The average rainfall of 1 week is :- %d",avg);
}