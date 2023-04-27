#include<stdio.h>
int main()
{
    int n=10;
    for(int i=0; i<10; i++)
    {
        for(int j=i; j<n-1; j++) printf(" ");
        
        for(int j=0; j<i; j++) printf("* ");
        
        printf("\n");
    }
}
