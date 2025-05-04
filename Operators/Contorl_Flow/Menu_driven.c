//W.A.P. to calculate area of shapes 
// Menu: 1.Area of circle 2.Area of Rectangle 3.Area of Square 4.Area of Trangle

#include<stdio.h>
int main()
{
    int ch,r,l,w,a,b,h,area;
    float const PI = 3.14;
    printf("Calculate thr area of shapes so please select your choice from below:- \n");
    printf("\n 1.Area of circle \n 2.Area of Rectangle \n 3.Area of Square \n 4.Area of Trangle");
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
                printf("To calculate the area of triangle Please enter the value of base and height");
                scanf("%d%d",&b,&h);
                area=1/2*b*h;
                printf("The area of triangle = %d",area);
                break;
        default :printf("Wrong choice");
                break;
    }
return 0;
}