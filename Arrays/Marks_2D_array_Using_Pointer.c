#include<stdio.h>

void display(int (*p)[3]);

int main()
{
    int a[3][3],i,j;

    printf("Enter the elements of matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    display(a);
    return 0;
}

void display(int (*p)[3])
{
    printf("You have entered the 2d matrix using pointer :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",*(*p+i)+j);
        }
        printf("\n");
    }
}