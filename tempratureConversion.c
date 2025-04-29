//Accept the temprature in fahreint and convert into celsius.
#include<stdio.h>
int main()
{
 float fahreint,celsius;
 printf("Enter the fahreint value:-");
 scanf("%f",&fahreint);
 celsius=(fahreint * 32)*5/9;
 printf("The celsius conversion of %ff is %fc",fahreint,celsius);
 return 0;
}