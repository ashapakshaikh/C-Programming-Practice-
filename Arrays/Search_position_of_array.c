#include<stdio.h>
int Search(int [],int num);

int main(){
    int a[5],num,i,pos=0;
    printf("Enter the elements of array");
    for(i=0;i<5;i++){
         scanf("%d",&a[i]);
    }
    printf("Enter the number");
    scanf("%d",&num);

//printf("%d",num);

    pos = Search(a,num);

    if(pos==-1){
         printf("The position of number not found");
    }else{
       printf("The position of number is: %d",pos);
    }
    return 0;
}

int Search(int a[],int num){
  int i,flag=0,position;
    for(i=0;i<5;i++){
        if(a[i]==num){
            position = i+1;
            flag=1;
            break;
        }
    }
    if(flag=0){
        position=-1;
    }

    //printf("\n\n position :- %d",position);
    return position;
}