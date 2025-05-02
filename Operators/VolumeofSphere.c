// W.A.P. to calculate the valume of sphere.
#include<stdio.h>
int main (){
    int r;
    double V;
    const float PI = 3.14159;
    printf("Enter the value of radius of sphere:-");
    scanf("%d",&r);
    V=4/3*PI*(r*r*r);
    printf("The volume of sphere is :-%lf",V);
    return 0;
}

// #include <stdio.h>
// #include <math.h>

// int main() {
//   double radius, volume;

//   // Get the radius from the user
//   printf("Enter the radius of the sphere: ");
//   scanf("%lf", &radius);

//   // Calculate the volume
//   volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

//   // Print the result
//   printf("The volume of the sphere is: %lf\n", volume);

//   return 0;
// }