//W.A.P. to calculate area of shapes 
// Menu: 1.Area of circle 2.Area of Rectangle  3.Area of Trangle
// using do while loop and exit function

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch,r,l,w,a,b,h,area;
    float const PI = 3.14;
    do{
    printf("\nCalculate the area of shapes so please select your choice from below:- ");
    printf("\n 1.Area of circle \n 2.Area of Rectangle \n 3.Area of Trangle \n 4.exit\n");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1: 
                printf("To calculate Area of circle please enter the radius value");
                scanf("%d",&r);
                area=PI*(r*r);
                printf("Area of Circle=%d",area);
                break;
        case 2: 
                printf("To calculate Area of rectangle Please enter the value of length and width");
                scanf("%d%d",&l,&w);
                area=(l*w);
                printf("Area of Rectangle=%d",area);
                break;
        case 3: 
                printf("To calculate area of square Please enter the side");
                scanf("%d",&a);
                area = a*a;
                printf("Area of Square=%d",area);
                break;
        case 4: 
                exit(0);
                //break;
        default :printf("Wrong choice");
                break;
    }
}
while(ch=4);
return 0;
}