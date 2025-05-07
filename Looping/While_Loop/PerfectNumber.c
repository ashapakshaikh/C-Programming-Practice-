// Accept number from user and check is perfect num or not eg 6 = 1+2+3=6
#include<stdio.h>
int main()
{
    int num=0,rev=0,rem=0,temp=0,i=1,perf;
    printf("Enter the number");
    scanf("%d",&num);
    temp = num;
    while(i<num){
        if(num%i==0){
            perf=perf+i;
        }
        i++;
     
    }

// printf("%d\n",temp);
// printf("%d\n",perf);
// printf("%d\n",num);

    if(temp == perf){
        printf("Perfect number");
    }else{
        printf("Not perfect number");
    }
    return 0;
}