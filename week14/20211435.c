#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int lotto[5][6];
    srand(time(NULL));

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<6; j++)
        {
            lotto[i][j]=rand()%45+1;
            for(int k=0; k<j; k++)
            {
                if(lotto[i][k]==lotto[i][j])
                {
                    j--;
                    break;
                }
            }
        }
        while(1) //버블정렬
        {    
            int count=0, tmp;
            for(int k=0; k<5; k++)
            {
                if(lotto[i][k]>lotto[i][k+1])
                {
                    tmp=lotto[i][k];
                    lotto[i][k]=lotto[i][k+1];
                    lotto[i][k+1]=tmp;
                    count++;
                }
            }
            if(count==0)
                break;
        }
    }
    for(int i=0; i<5; i++)
    {
        printf("%d세트 : ", i+1);
        for(int j=0; j<6; j++)
        {
            printf("%d", lotto[i][j]);
            if(j<5)
                printf(", ");
        }
        printf("\n");
    }
}