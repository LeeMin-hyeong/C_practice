#include <stdio.h>

int divisor(int number)
{
    for(int i=1; i<=number; i++)
    {
        if(number%i==0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

int main(void)
{
    divisor(10);
    return 0;
}