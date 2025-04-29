//Accept a character from user and find its ASCII value.(use %d to ASCII value)
#include<stdio.h>
int main()
{
    char value;
    printf("Enter a character:\n");
    scanf("%c",&value);
    printf("ASCII value of %c=%d",value,value);
}