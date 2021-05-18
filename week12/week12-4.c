#include <stdio.h>

unsigned long long power_of_2(int n)
{
    if(n==0)
        return 1;
    else
        return 2*power_of_2(n-1);
}

int main(void)
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        printf("%llu", power_of_2(n));
        printf("\n");
    }
}