//Write a program to input lower limit and upper limit and print all the odd numbers in that range.(using while loop) 
#include<stdio.h>
int main()
{
    int ll,ul;
    printf("enter upper and lower limits : ");
    scanf("%d%d",&ll,&ul);
    int i;
    printf("all the odd numbers between %d and %d :",ll,ul);
    if(ll%2)
    {
        i=ll;
        while(i<=ul)
        {
            printf("%d\n",i);
            i+=2;
        }
    }
   else{
        i=ll+1;
         while(i<=ul)
        {
            printf("%d\n",i);
            i=i+2;
        }
    }
    return 0;
}
