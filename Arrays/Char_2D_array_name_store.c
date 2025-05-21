#include<stdio.h>
void display(char [][20]);

int main()
{
    char name[3][20],i,j;
    printf("Enter the Employee names:-\n");
    for(i=0;i<3;i++){
        gets(name[i]);
    }

    display(name);
    return 0;
}
void display(char name[][20]){
    printf("\n You have entered the employee names are :\n");
    for(int i=0;i<3;i++){
        puts(name[i]);
    }
    printf("\n");
}