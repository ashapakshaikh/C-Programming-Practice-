//W.A.P to print all uper case and lower case letters using while loop
#include<stdio.h>
int main(){
    char Alph='A',alph='a';

    for(;Alph<='Z';Alph++){
        printf("%c\t",Alph);      
    }
    if(Alph='Z'){
        printf("\nUpper case letters end here...!!!\nLower case letter start from here...!!!\n");
    }
    for(;alph<='z';alph++){
        printf("%c\t",alph);      
    }
    return 0;
}