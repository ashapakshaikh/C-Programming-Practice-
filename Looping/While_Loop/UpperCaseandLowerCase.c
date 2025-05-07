//W.A.P to print all uper case and lower case letters using while loop
#include<stdio.h>
int main(){
    char Alph='A',alph='a';

    while(Alph<='Z'){
        printf("%c\t",Alph);
        Alph++;
    }
    if(Alph='Z'){
        printf("\nUpper case letters end here...!!!\nLower case letter start from here...!!!\n");
    }
    while(alph<='z'){
        printf("%c\t",alph);
        alph++;
    }
    return 0;
}