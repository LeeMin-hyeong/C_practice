#include <stdio.h>

void grade_array(int score[], char grade[], int size)
{
    for(int i=0; i<size; i++)
    {
        if(score[i]>=90)
            grade[i]='A';
        else if(score[i]>=80)
            grade[i]='B';
        else if(score[i]>=70)
            grade[i]='C';
        else if(score[i]>=60)
            grade[i]='D';
        else
            grade[i]='F';

    }
}

int main(void)
{
    int score[5]={95, 85, 75, 65, 55};
    char grade[5];

    grade_array(score, grade, 5);

    for(int i=0; i<5; i++)
        printf("%c", grade[i]);
}