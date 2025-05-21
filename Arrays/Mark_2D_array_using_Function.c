#include<stdio.h>
void display(int [][3]);

int main(){
    int a[3][3],i,j;
    printf("Enter the marks of 3 subjects\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    display(a);
    return 0;
}
void display(int a[][3])
{
    printf("\n You have eneterd marks are: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}