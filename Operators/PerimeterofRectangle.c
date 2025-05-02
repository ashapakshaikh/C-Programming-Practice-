// W.A.P. to print the perimiters of rectangle using its height and width as input.
#include<stdio.h>
int main()
{
    int h,l,p;
    printf("Enter the height and width:-");
    scanf("%d%d",&h,&l);
    p=2*(h+l);
    printf("The Perimiters is :- %d",p);
    return 0;
} 