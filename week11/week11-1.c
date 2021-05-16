#include <stdio.h>

int power(int, int);

int main(void)
{
    for(int i=1; i<21; i++)
    {
        printf("%d", power(2,i));
        if(i<20)
         printf(", ");
    }
    return 0;
}

int power(int n, int m)
{
    int i;
    int pow=1;
    for(i=0; i<m; ++i)
        pow*=n;
    return pow;
}