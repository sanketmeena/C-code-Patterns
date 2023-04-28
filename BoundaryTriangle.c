#include<stdio.h>
int main()
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<=10-i; j++) printf(" ");
        for(int j=0; j<=i; j++)
        {
            if(i==9) printf("* ");
            else if(j==0 || j==i) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}
