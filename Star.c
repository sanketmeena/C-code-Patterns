#include<stdio.h>
int main()
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10-i; j++) printf(" ");
        for(int j=0; j<=i; j++) printf("* ");
        
        printf("\n");
    }
    
    for(int i=1; i<10; i++)
    {
        for(int j=0; j<=i; j++) printf(" ");
        for(int j=0; j<10-i; j++) printf("* ");
        printf("\n");
    }
    
    return 0;
}
