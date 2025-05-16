#include<stdio.h>
int main(){
    char fname[10]="Test";
    printf("Enter the name:- ");
    scanf("%s",fname);
    //printf(" you have enetered name :%s",fname);
    for(int i=6;i>=0;i--){
        printf("%c",fname[i]);
    }
    return 0;
}
