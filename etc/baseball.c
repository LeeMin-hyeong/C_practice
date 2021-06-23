#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create();

int main()
{
    int com[4], usr[4], strike=0, ball=0, try=1;
    srand(time(NULL));
    create(com);
    printf("Start Baseball Game\n");
    while(1)
    {    
        strike=0;
        ball=0;
        printf("Enter 4 different numbers\n");
        //create(usr);
        scanf("%d %d %d %d", &usr[0], &usr[1], &usr[2], &usr[3]);
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                if(usr[i]==com[j])
                    ball++;
            }
            if(com[i]==usr[i])
            {
                ball--;
                strike++;
            }
        }
        if(strike==4)
        {    
            printf("You Win (%d %s)\n", try, try==1?"try":"tries");
            break;
        }
        else if(strike==0&&ball==0)
        {
            printf("Out (%d %s)\n\n", try, try==1?"try":"tries");
            try++;
        }
        else
        {
            printf("%d Strike %d Ball (%d %s)\n\n", strike, ball, try, try==1?"try":"tries");
            try++;
        }
    }
    return 0;
}

void create(int a[])
{
    for(int i=0; i<4; i++)
    {
        a[i]=rand()%10;
        if(a[0]==0)
            i--;
        for(int j=0; j<i; j++)
        {
            if(a[i]==a[j])
            {
                i--;
                break;
            }
        }
    }
}