//Write a program to input any alphabet and print the capital letter if the character is small and print the small letter if the character is capital letter.
#include<stdio.h>
int main()
{
    char c;
    printf("enter a character : ");
    scanf("%c",&c);
    int a=c;
    if((a>=65)&(a<=90)){
        int b=a+32;
        char cr=b;
        printf("%c\n",cr);
    }
    else if((a>=97)&(a<=122)){
        int b=a-32;
        char cr=b;
        printf("%c\n",cr);
    }
    else{
        printf("error404\n");
    }
    return 0;
}
