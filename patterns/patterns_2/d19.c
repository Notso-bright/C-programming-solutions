/*E E E E E
D D D D
C C C
D D
E
*/
#include<stdio.h>
int main()
{
    char c;
    c='E';
    for(int i=0;i<=5;i++)
    {
        if(c<='C')
        for(int j=i;j<=5;j++)
        {
            printf("%c ",c++);
        }
        else{c--;
          for(int j=i;j<=5;j++)
        {
            printf("%c ",c);
        }  
        }
        printf("\n");
    }
    return 0;
}
