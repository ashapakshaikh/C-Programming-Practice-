// Accept the marks of 5 subject from user and calculate the average.

#include <stdio.h>
int main()
{
    int hindi,marathi,english,math,science;
    float Avarage;
    printf("Enter the marks of hindi:-");
    scanf("%d",&hindi);
    printf("\nEnter the marks of marathi:-");
    scanf("%d",&marathi);
    printf("\nEnter the marks of english:-");
    scanf("%d",&english);
    printf("\nEnter the marks of math:-");
    scanf("%d",&math);
    printf("\nEnter the marks of science:-");
    scanf("%d",&science);

    Avarage = hindi+marathi+english+math+science / 5;

    printf("The average is = %f",Avarage);
    return 0;
}