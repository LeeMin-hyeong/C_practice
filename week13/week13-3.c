#include <stdio.h>
#define N 5

int main(void)
{
    int score[N], count=0;
    float sum=0;
    
    printf("성적을 입력하세요 : ");
    for(int i=0; i<N; i++)
        scanf("%d", &score[i]);

    while(1)
    {
        int tmp;
        count=0;
        for(int i=0; i<N-1; i++)
        {
            if(score[i]<score[i+1])
            {
                tmp=score[i];
                score[i]=score[i+1];
                score[i+1]=tmp;
                count++;
            }
        }
        if(count==0)
            break;
    }

    for(int i=0; i<N; i++)
        sum+=score[i];
    for(int i=0; i<N; i++)
        printf("%d등   %d점\n", i+1, score[i]);
    printf("전체 평균 : %.1f점\n", sum/N);
}