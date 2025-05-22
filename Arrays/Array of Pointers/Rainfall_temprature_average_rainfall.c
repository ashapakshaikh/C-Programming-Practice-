#include<stdio.h>
#include<stdlib.h>
int main(){
    float *rainfall[4],temp=0.0;
    int n;
    printf("Enter the numbers of years\n");
    scanf("%d",&n);

    for(int i=0;i<4;i++){
        rainfall[i]=(float *)calloc(n,sizeof(float));
    }
   // printf("Enter the temprature %f for years %f",n,temp);

    for(int i=0;i<4;i++){
        printf("Enter the rainfall value %d for the year %d",i+1,n);
        for(int j=0;j<n;j++){
            scanf("%f",*(rainfall +i)+j);
        }
    }
    float sum=0.0;
    for(int i=0;i<4;i++){      
        for(int j=0;j<n;j++){
            sum=sum+(*(*(rainfall +i)+j));
        }
        float avg=sum/4;
        printf("\n The month of average %f of rainfall year %d",avg,i+1);
    }

   // printf("\n");
    return 0;
}