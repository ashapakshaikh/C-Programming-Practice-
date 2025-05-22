#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *accept(char *name){
    char temp[20];
    printf("Enter the string ");
    gets(temp);
    name=(char*)malloc(strlen(temp+1));
    strcpy(name,temp);
    return name;
}
int main(){
    char *name;
    name = accept(name);
    printf("Name=%s",name);
    return 0;
}