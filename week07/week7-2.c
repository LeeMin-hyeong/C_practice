#include <stdio.h>

int main(void) {
    
    int num = 0, sum = 0, input = 0;

    printf("정수를 입력하세요 : ");
    scanf("%d", &input);
    if(input<0)
    {
        printf("음수가 입력되었습니다.\n프로그램을 종료합니다.\n");
    }
    else if (input==0)
    {
        printf("0이 입력되었습니다.\n프로그램을 종료합니다.\n");
    }
    else
    {
        while(num <= input)
        {
            sum += num;
            num++;
        }
        printf("1부터 %d까지의 합은 %d입니다.\n", input, sum);
    }
    return 0;
}