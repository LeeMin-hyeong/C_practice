#include <stdio.h>

int r_sum(int num)
{
    if(num==1)
        return num;
    else
        return num+r_sum(num-1);
}

int main(void)
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        printf("%d", r_sum(n));
        printf("\n");
    }
}