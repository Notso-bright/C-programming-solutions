//Write a Program to input a number & print the corresponding Week day using a switch case. (week starts on Sunday)
#include <stdio.h>
int main()
{
    int a;
    printf("enter a number whose corresponding week day needed :");
    scanf("%d",&a);
    switch(a)
    {
       case 1 :
       printf("sunday\n");
       break;
        case 2 :
       printf("monday\n");
       break;
        case 3 :
       printf("tuesday\n");
       break;
        case 4 :
       printf("wednesday\n");
       break;
        case 5 :
       printf("thusday\n");
       break;
        case 6 :
       printf("friday\n");
       break;
        case 7 :
       printf("saturday\n");
       break;
       default : 
       printf("not found\n");
    }
    return 0;
}
