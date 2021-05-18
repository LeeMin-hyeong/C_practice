#include <stdio.h>

void re_bin_num(int n)
{
    if(n==0)
        printf("%d", n);
    else if(n>0)
    {
        re_bin_num(n/2);
        printf("%d", n%2);
    }
}

int main(void)
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        re_bin_num(n);
        printf("\n");
    }
}