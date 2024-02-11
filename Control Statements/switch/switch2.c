//Write a program to input any number and print the corresponding month using a switch case. 
#include <stdio.h>
int main()
{
    int a;
    printf("enter a number corresponding to a month : ");
    scanf("%d",&a);
     switch(a){
        case 1 :
             printf("the corresponding month is january\n");
             break;
        case 2 :
              printf("the corresponding month is february\n");
        break;
        case 3 :
              printf("the corresponding month is march\n");
        break;
        case 4 :
              printf("the corresponding month is april\n");
        break;
        case 5 :
              printf("the corresponding month is may\n");
        break;
        case 6 :
              printf("the corresponding month is june\n");
        break;
        case 7 :
              printf("the corresponding month is july\n");
        break;
        case 8 :
              printf("the corresponding month is august\n");
        break;
        case 9 :
              printf("the corresponding month is september\n");
        break;
        case 10 :
              printf("the corresponding month is october\n");
        break;
        case 11 :
              printf("the corresponding month is november\n");
        break;
        case 12 :
              printf("the corresponding month is december\n");
        break;
        default :
              printf("ERROR 404\n");
    }

    return 0;
}
