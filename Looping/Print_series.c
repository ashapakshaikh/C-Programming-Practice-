// W.A.P tp print following series
// 1 3 5 7 9
// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=9){
//     printf("%d\t",i);
//     i=i+2;
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int i=1;
    while(i<=9){
        if(i%2!=0){
            printf("%d\t",i);
        }
    i++;
    }
    return 0;
}