//Write a program to check if a person is eligible to vote in India  or not.
#include <stdio.h>
int main()
{
    int a;
    printf("enter the age :");
    scanf("%d",&a);
    if(a>=18){
        printf("the person is eligible to vote in India\n");
    }
    else{
        printf("the person is not eligible to vote in India\n");
    }
    return 0;
}
