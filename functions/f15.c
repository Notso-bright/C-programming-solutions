//f15 Write a program to input any character and check whether it is a vowel or not(using if statement and logical OR) using function call by value with return.
#include<stdio.h>
int check_char(char a)
{
    /* if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U') return 1;
    else return 0; */
    return a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U';
}
int main(){
    char x;
    printf("enter a character : ");
    scanf("%c",&x);
    if(check_char(x)==1){
        printf("entered character is a vowel");
    }
    else{
        printf("enter character is not a vowel");
    }
}