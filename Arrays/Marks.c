#include<stdio.h>
int main(){
    int marks[5] = {70,68,73,71,68};

    int a[3],b[4];
    a[0]=1;
    a[1]=30;
    a[2]=40;

    for(int i=0;i<5;i++){
        printf("%d\t",marks[i]);
    }

    printf("Enter the b Elements:-\n");
    for(int j=0;j<4;j++){
        scanf("%d",&b[j]);
    }

    for(int j=0;j<4;j++){
        printf("%d\t",b[j]);
    }
    return 0;
}