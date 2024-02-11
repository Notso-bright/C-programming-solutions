//Write a program to input any character and check either it is capital letter or it is a small letter or it is a number.
#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    int n=ch;
    printf("%d\n",n);
    if((n>=65)&&(n<=90)){
        printf("input is an uppercase letter\n");
    }
    else if((n>=97)&&(n<=122)){
        printf("input is a lowercase letter\n");
    }
    else if((n>=48)&&(n<=57)){
        printf("input is a number\n");
    }
    else{
        printf("invalid input\n");
    }
    return 0;
}


