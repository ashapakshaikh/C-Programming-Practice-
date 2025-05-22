#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *student[4],sub;

    printf("Enter the subject numbers");
    scanf("%d",&sub);

    for(int i=0;i<4;i++){
        student[i]=(int *)malloc(sub*sizeof(int));
    }

    for(int i=0;i<4;i++){
        printf("Enter the marks of sundents %d for subject of %d",i+1,sub);
        for(int j=0;j<sub;j++){
            scanf("%d",*(student+i)+j);
        }
    }
        printf("The marks are ");
        for(int i=0;i<4;i++){
            printf("Student %d for subject %d\n",i+1,sub);
        for(int j=0;j<sub;j++){
            printf("%d\t",*(*(student+i)+j));
        }
        printf("\n");
    }
    return 0;
}