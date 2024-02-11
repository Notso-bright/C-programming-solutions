//Write a program to input any float and round off of that float using call by value with return.
#include<stdio.h>
int round_of(float f)
{
    int i;
    i=f;
    f=f-i;
    if(f>=0.5)
    {
        i++;
    }
    return i;
}
int main()
{   
    float x;
    int i;
    printf("enter a number : ");
    scanf("%f",&x);
    printf("the rounded off value of %f is %d \n",x,round_of(x));
    return 0;
}
