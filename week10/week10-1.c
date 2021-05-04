#include <stdio.h>

int my_print(char print, int number)
{
    for(int i=0; i<number; i++)
    {
        printf("%c", print);
    }
    return 0;
}

int main(void)
{
    my_print('#', 3);
    return 0;
}