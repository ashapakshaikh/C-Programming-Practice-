#include<stdio.h>
#include<string.h>
int main(){
    char string[10];
    int count=0;
    printf("Enter the string:- ");
    scanf("%s",string);
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]=='a'||string[i]=='A'||string[i]=='i'||string[i]=='I'||string[i]=='e'||string[i]=='E'||string[i]=='o'||string[i]=='O'||string[i]=='u'||string[i]=='U')
        {
            count++;
        }
    }

    // if(count !=0){
     printf("The total count of vowles is : %d",count);
    // } else{
    //    printf("There is no vowels present in the string");
    // }  
    return 0;
}