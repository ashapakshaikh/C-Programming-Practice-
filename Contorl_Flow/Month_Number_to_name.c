// Accept month in a number and display its name
#include<stdio.h>
int main()
{
    int MonthNumber;
    printf("Enter the Month number:- ");
    scanf("%d",&MonthNumber);

    switch(MonthNumber)
    {
        case 1: printf("you have selected the January month");
                break;
        case 2: printf("you have selected the February month");
                break;
        case 3: printf("you have selected the March month");
                break;
        case 4: printf("you have selected the April month");
                break;
        case 5: printf("you have selected the May month");
                break;
        case 6: printf("you have selected the June month");
                break;
        case 7: printf("you have selected the July month");
                break;
        case 8: printf("you have selected the August month");
                break;
        case 9: printf("you have selected the Septebar month");
                break;
        case 10: printf("you have selected the Octomber month");
                break;
        case 11: printf("you have selected the November month");
                break;
        case 12: printf("you have selected the December month");
                break;

    }
    return 0;
}