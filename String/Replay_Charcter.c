#include<stdio.h>
int main(){
    char str[10];

    printf("Enter the string ");
    scanf("%s",str);

    for(int i=0;i<str[i]!=0;i++)
    {
        if(str[i]=='a'|| str[i]=='A')
        {
            str[i]='e';
        }
    }
printf("Replaced a with e : %s",str);
return 0;
}