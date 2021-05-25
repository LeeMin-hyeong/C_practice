#include <stdio.h>

void diff_array(int arr[], int first, int diff, int size)
{
    arr[0]=first;
    for(int i=1; i<size; i++)
        arr[i]=arr[i-1]+diff;
}

int main(void)
{
    int arr[10];
    diff_array(arr, 1, 2, 10);
    for(int i=0; i<10; i++)
        printf("%d ", arr[i]);
}