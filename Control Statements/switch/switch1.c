//Write a program to input any character and check whether it is a vowel or not (using a switch case).
#include <stdio.h>
int main(){
    char ch;
    printf("enter a charcter : ");
    scanf("%c",&ch);
    switch(ch)
    {  
        case 'a':
             printf("entered character is a vowel\n");
             break;
        case 'A':
             printf("entered character is a vowel\n");
             break;
        case 'e':
            break;
            printf("entered character is a vowel\n");
        case 'E':
            printf("entered character is a vowel\n");
            break;
        case 'i':
            printf("entered character is a vowel\n");
            break;
        case 'I':
            printf("entered character is a vowel\n");
            break;
        case 'o':
            printf("entered character is a vowel\n");
            break;
        case 'O':
            printf("entered character is a vowel\n");
            break;
        case 'u':
            printf("entered character is a vowel\n");
            break;
        case 'U':
            printf("entered character is a vowel\n");
            break;
        default :
            printf("entered character is not a vowel\n");

    }
    return 0;
}
