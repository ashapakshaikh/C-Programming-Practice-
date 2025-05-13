// Accept array & one number from user and check whether that number is present or not
// if it is present display its position.
#include<stdio.h>
int main(){
    int a[5],num,flag=0,i;

    printf("\nEnter the element of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number");
    scanf("%d",&num);
    for(i=0;i<5;i++){
        if(a[i]==num){
            flag=1;
            break;
        }
    }
    if (flag==1)
        printf("The number is found and position of number is %d",i+1);
    else    
        printf("The number is not found");

return 0;
}

