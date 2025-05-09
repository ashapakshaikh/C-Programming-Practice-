//print factorial number from 2 to 7
#include<stdio.h>
int main()
{
    int num,i=1,fact=1,j=1;
    //printf("Enter the number");
    //scanf("%d",&num);
    for(i=2;i<=7;i++){
        fact=1;
       for(j=1;j<=i;j++){
        fact=fact*j;         
       }  
       printf("the factorial number is of %d=%d\n",i,fact);           
    }
    
    return 0;
}