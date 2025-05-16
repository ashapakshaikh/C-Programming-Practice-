// Array of 10 integers is given. 5 integers are intialized.insert an element in an array 
// at a given position.
#include<stdio.h>
int main(){
    int a[10]={0,2,4,6,8},pos,num;
     
    printf("Enter the position of array element");
    scanf("%d",&pos);
    printf("\n Enter the number");
    scanf("%d",&num);
        for (int i = 9; i > pos; i--) 
        {
            a[i] = a[i - 1];
        }

    // Insert the new element
    a[pos] = num;

    for(int i=0;i<10;i++){
        printf("%d\t",a[i]);
    }


}