#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char input;
    int ran, game=1;
    
    srand(time(NULL));
    printf("가위(s) 바위(r) 보(p) 게임을 시작합니다. (게임종료 : 9)\n\n");
    
    while(game)
    {
        ran = rand()%3;
        if(ran==0)
            ran='s';
        else if(ran==1)
            ran='r';
        else if(ran==2)
            ran='p';
        //printf("%c\n",ran);

        while(1)
        {
            printf("가위 바위 보를 선택하세요 : ");
            scanf("%c", &input);
            getchar();
            
            if(input=='s'||input=='r'||input=='p')
            {
                if(input==ran)
                {
                    if(input=='s')
                        printf("당신은 가위를 냈고 컴퓨터는 가위를 냈습니다.\n당신은 비겼습니다.\n\n");
                    else if(input=='r')
                        printf("당신은 바위를 냈고 컴퓨터는 바위를 냈습니다.\n당신은 비겼습니다.\n\n");
                    else
                        printf("당신은 보를 냈고 컴퓨터는 보를 냈습니다.\n당신은 비겼습니다.\n\n");
                }
                else if((input=='s'&&ran=='p')||(input=='r'&&ran=='s')||(input=='p'&&ran=='r'))
                {
                    if(input=='s')
                        printf("당신은 가위를 냈고 컴퓨터는 보를 냈습니다.\n당신은 이겼습니다.\n\n");
                    else if(input=='r')
                        printf("당신은 바위를 냈고 컴퓨터는 가위를 냈습니다.\n당신은 이겼습니다.\n\n");
                    else
                        printf("당신은 보를 냈고 컴퓨터는 바위를 냈습니다.\n당신은 이겼습니다.\n\n");
                }
                else
                {
                    if(input=='s')
                        printf("당신은 가위를 냈고 컴퓨터는 바위를 냈습니다.\n당신은 졌습니다.\n\n");
                    else if(input=='r')
                        printf("당신은 바위를 냈고 컴퓨터는 보를 냈습니다.\n당신은 졌습니다.\n\n");
                    else
                        printf("당신은 보를 냈고 컴퓨터는 가위를 냈습니다.\n당신은 졌습니다.\n\n");
                }
                break;
            }
            else if(input=='9')
            {
                printf("다음에 또 만나요.\n");
                game=0;
                break;
            }
            else
                printf("s, r, p, 9만 입력 가능합니다.\n\n");
        }
    }
    return 0;
}