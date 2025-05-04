// Accept month number and display seasons accordingly
#include<stdio.h>
int main()
{
    int MonthNum;
    printf("Enter the month number:- ");
    scanf("%d",&MonthNum);

    switch(MonthNum)
    {
        case 1: 
        case 2:
        case 3:
        case 4:
        case 5:printf("Summer season");
                break;
        case 6:
        case 7:
        case 8:printf("Rainy season");
                break;
        case 9:
        case 10:
        case 11:
        case 12:printf("Winter Season");
                break;
        default : printf("wrong choice");
                 break;
    }

    return 0;
}