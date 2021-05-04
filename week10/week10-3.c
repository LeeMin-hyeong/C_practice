#include <stdio.h>

int is_prime(int n)
{
    int count=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            count++;
    }
    if(count>2)
        return 0;
    else
        return 1;
}

int main(void)
{
    printf("%d", is_prime(8));
    return 0;
}