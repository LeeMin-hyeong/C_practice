#include <stdio.h>

void bin_num(int n)
{
    while(1)
    {
        if(n%2==1)
            printf("1");
        else
            printf("0");
        n/=2;
        if(n==0)
        {
            printf("0");
            break;
        }
        else if(n==1)
        {
            printf("1");
            break;
        }
    }
}

int main(void)
{
    bin_num(18);
}