#include<stdio.h>
#include<stdlib.h>
int main()
{
    int marks[3][3],i,j; 

    printf("Enter the marks of 3 subjects\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&marks[i][j]);
        }
    }
    printf("You have entered marks are :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}