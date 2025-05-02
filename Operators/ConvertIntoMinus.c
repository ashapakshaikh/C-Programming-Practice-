// W.A.P. that takes hours and minutes as input and Calculate the total numbers of minutes.(e.g. 1 hr 30min :- 90min)
#include<stdio.h>
int main()
{
    int min,hours,totalminus,minconversion;
    printf("Enter the hours and minus:-");
    scanf("%d%d",&hours,&min);
    minconversion=hours * 60;
    totalminus = minconversion + min;
    printf("Total minus is :- %d minutes",totalminus);
    return 0;
}