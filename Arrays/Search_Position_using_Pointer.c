//An array of five integer given.Accept the integer from user and search for it in an array.
// write a function named "SearchValue"
// Note:- Use Pointer notation to write the function.
#include<stdio.h>
#include <stdlib.h>
void SearchValue(int *,int num);

int main(){
    int num,a[5],i;

    printf("Enter the element number of array\t");
    scanf("%d",&num);

    printf("Enter the array of elements\t");
    for(i=0;i<num;i++){
        scanf("%d",(a+i));
    }
    SearchValue(a,num);
    return 0;
}
void SearchValue(int *ptr,int num){
   int pos,flag=0,searchNum;
   printf("Enter the search element\t");
   scanf("%d",&searchNum);
    for(int i=0;i<num;i++){
        if(ptr[i]==searchNum){
            pos=i+1;
            flag=1;
            break;
        }
    } 
    if(flag==1){
        printf("The position of number is %d ",pos);
    }else{
        printf("The number is not found...!!!");
    }
}