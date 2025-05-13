// Accept 5 numbers in an array. Multiply each element by 3 and store the result in the same array.
// Display the resultant array
#include<stdio.h>
int main(){
    int a[5];
    printf("Enter the 5 element of array:- ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<5;j++){
        a[j]=(a[j]*3);
    }
    printf("The multiplication of array by 3 is ");
    for(int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}