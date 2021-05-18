#include <stdio.h>
#include <time.h>

unsigned long long count=0;

unsigned long long fibonacci_r(int n)
{
    //count++; //재귀함수 호출 수
    if(n<=1)
        return n;
    else
        return (fibonacci_r(n-1)+fibonacci_r(n-2));
}

unsigned long long fibonacci_i(int n)
{
    int i, tmp, fib=1, fib_p=0;
    if(n<=1)
        return n;
    for(i=2; i<=n; i++)
    {
        tmp=fib;
        fib+=fib_p;
        fib_p=tmp;
    }
    return fib;
}

int main(void)
{
    clock_t start_clock1, end_clock1, start_clock2, end_clock2;
    unsigned long long a, b;
    
    start_clock1=clock();
    a=fibonacci_r(44);
    end_clock1=clock();
    
    printf("%llu\n", a);
    //printf("%llu\n", count); //재귀함수 호출 수 출력
    printf("%lu\n", end_clock1-start_clock1);
    
    start_clock2=clock();
    b=fibonacci_i(44);
    end_clock2=clock();
    
    printf("%llu\n", b);
    printf("%llu\n", end_clock2-start_clock2);
}