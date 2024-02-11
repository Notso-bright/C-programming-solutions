//write a program to input lower limit and upper limit and print the multiplication table of each number.(using for loop)
#include <stdio.h>
int main()
{
    int ll,ul;
    printf("enter lower and upper limit :");
    scanf("%d%d",&ll,&ul);
    for(int n=ll;n<=ul;n++)
    {
        printf("multiplication table : %d\n",n);
        for(int m=1;m<=10;m++)
        {
            printf("%d * %d = %d\n",n,m,n*m);
        }
    }
    return 0;
}