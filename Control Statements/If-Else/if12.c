//Write a program to input any character and check whether it is a vowel or not(using if statement and logical OR).
#include <stdio.h>
int main()
{
    char ch;
    printf("enter any character : ");
    scanf("%c",&ch);
    int a = ch ;
    if((ch== 65)||(ch == 69)||(ch ==73)||(ch ==79)||(ch ==85)||(ch ==97)||(ch ==101)||(ch ==105)||(ch ==111)||(ch ==73)){
        printf("given input is a vowel\n");
    }
    else {
        printf("given input is not a vowel\n");
    }
    /* if((ch== 65)||(ch == 69)||(ch ==73)||(ch ==79)||(ch ==85)||(ch ==97)||(ch ==101)||(ch ==105)||(ch ==111)||(ch ==73)){
        printf("given input is a vowel\n");
    }
    else {
        printf("given input is not a vowel\n");
    } */
    return 0;
}
