#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number to check max number:-");
    scanf("%d%d",&a,&b);
    (a >b)?printf("Entered number is Max:-%d",a):printf("Entered number max:-%d",b);
    return 0;
}