#include<stdio.h>
int main(){
    int a[5],sum=0;

    printf("Enter the array of element");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("Sum of array = %d",sum);
    return 0;
}