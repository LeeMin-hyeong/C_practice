#include <stdio.h>

float power(int, int);

int main(void)
{
    for(int i=-1; i>-11; i--)
    {
        printf("%f", power(2,i));
        if(i>-10)
         printf(", ");
    }
    return 0;
}

float power(int n, int m)
{
    int i;
    float pow=1;
    if(m>0)
        for(i=0; i<m; ++i)
            pow*=n;
    else
        for(i=0; i<(-m); ++i)
            pow/=n;
    return pow;
}