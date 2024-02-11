//Write a program to input lower limit and upper limit and print all the odd numbers in that range.(using for loop) 
#include <stdio.h>
int main()
{
    int i,ll,ul,t;
    printf("enter two numbers: ");
    scanf("%d%d",&ll,&ul);
    printf("the odd numbers between %d and %d are :-\n",ll,ul);
    /* t=a%2;
    if(t!=0)
    {
    for(i=a;i<=b;i+=2) 
    printf(" %d,\t",i);
    }
    else{
        for(i=a+1;i<=b;i+=2) 
    printf("%d\n",i);
    } */
    for(int i=ll;i<=ul;i++){
        if(i%2){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
