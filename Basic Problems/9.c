//Write a program to input the radius of a circle and calculates the area and perimeter of that circle.
#include <stdio.h>
int main()
{
    int r;
    printf("enter the value of radius :");
    scanf("%d",&r);
    printf("area of the circle is: %f and perimeter is: %f\n",r*r*3.14,2*3.14*r);
    return 0;
}
