#include <stdio.h>

int main(void) {
    
    char input;
    
    printf("알파벳 문자를 입력하세요 : ");
    scanf("%c", &input);
    if(input>=97)
    {
        input-=32;
    }
    else if(input>=65)
    {
        input+=32;
    }
    printf("변환된 문자는 %c입니다.\n", input);

    return 0;
}