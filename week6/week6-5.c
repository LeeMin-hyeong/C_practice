#include <stdio.h>
int main(void) {
    
    int pencil;

    printf("연필 개수를 입력하세요 : ");
    scanf("%d", &pencil);
    printf("연필 %d자루는 %d다스, %d자루입니다.", pencil, pencil/12, pencil%12);
    return 0;
}