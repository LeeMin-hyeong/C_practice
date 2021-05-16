#include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c = 3;
    printf("%3d%3d%3d\n", a, b, c);
    { //블록 A
        int b = 4;
        int c = 5;
        printf("%3d%3d%3d\n", a, b, c); //블록 A내에서 a가 따로 정의되지 않았으므로 a==1
        a = b; //블록 A에서 a가 정의되지 않았으므로 메인함수의 a는 4의 값을 가지게 됨
        { //블록 A-1
            int c = 6;
            c = b; //블록 A에서 정의된 b가 블록 A-1의 변수 c에 저장됨
            printf("%3d%3d%3d\n", a, b, c); // a==4, b==4, c==4
        }
        printf("%3d%3d%3d\n", a, b, c); //블록 A내에서의 변수 a==4, b==4, c==5
        { //블록 A-2
            printf("%3d%3d%3d\n", a, b, c); //블록 A내에서의 변수 a==4, b==4, c==5
        }
        printf("%3d%3d%3d\n", a, b, c); //블록 A내에서의 변수 a==4, b==4, c==5
    }
    printf("%3d%3d%3d\n", a, b, c); //블록 A를 벗어났으므로 a==4, b==2, c==3

    return 0;
}