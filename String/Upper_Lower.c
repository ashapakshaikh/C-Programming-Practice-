#include<stdio.h>
int main(){
    char string[10];

    printf("Enter the string ");
    scanf("%s",string);

    for(int i=0;string[i]!='\0';i++){
        if(string[i]>='A' && string[i]<='Z'){
            string[i]=string[i]+32;
        }
        else if(string[i]>='a' && string[i]<='z'){
            string[i]=string[i]-32;
        }
        
    }

    printf("Converted the string upper to lower and vice versa :-%s",string);
    return 0;
}