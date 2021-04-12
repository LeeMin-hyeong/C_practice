#include <stdio.h>

int main(void) {
    int num=0;

    printf("3자리 정수를 입력하세요 : ");
    scanf("%d", &num);
    printf("백의 자리 숫자 : %d\n일의 자리 숫자 : %d\n", num/100, num%10);

    return 0;
}