#include<stdio.h>
int main(){
    char fName[10];

    printf("Enter the name ");
    scanf("%s",fName);
    for(int i=0;fName[i]!='\0';i+=2){
        printf("%c",fName[i]);
    }
    return 0;
}