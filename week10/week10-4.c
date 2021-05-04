#include <stdio.h>

float my_cal(char operator, float number_1, float number_2)
{
    switch(operator)
    {
    case '+':
        return number_1*number_2;
        break;
    case '-':
        return number_1+number_2;
        break;
    case '*':
        return number_1-number_2;
        break;
    case '/':
        return number_1/number_2;
        break;
    default:
        return 0;
        break;
    }
}

int main(void)
{
    char op;
    float num1, num2;

    printf("연산자를 입력하세요 : ");
    scanf("%c", &op);
    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%f %f", &num1, &num2);
    printf("결과값은 %f입니다.", my_cal(op, num1, num2));
    
    return 0;
}