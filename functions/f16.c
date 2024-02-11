//Write a program to input any character and check either it is capital letter or it is a small letter or it is a number using function call by value with return.
#include<stdio.h>
int check_char(int a){
    if((a>=65)&&(a<=90)){
        return 1;
    }
    else if((a>=97)&&(a<=122)){
        return 2;
    }
    else if((a>=48)&&(a<=57)){
        return 3;
    }
    else {
        return 4;
    }
}
int main(){
    char a;
    printf("enter a character : ");
    scanf("%c",&a);
    int i;
    i=a;
    if(check_char(i)==1){
        printf("enter character is a capital leter");
    }
    else if(check_char(i)==2){
        printf("enter character is a lowercase leter");
    }
    else if(check_char(i)==3){
        printf("enter character is a number");
    }
    else{
        printf("enter character is a symbol");
    }
    return 0;
}


