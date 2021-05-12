#include <stdio.h>
#include <string.h>

int main(void)
{
    char animals[10][10]={"Whale", "Lion", "Tiger", "Zebra", "Rabit", "Bear", "Dog", "Cat", "Fox", "Pig"};
    char save[10];
    int count=0;

    printf("Bubble Sort (animals - mammals)\n");
    printf("----------------------------------\n");
    
    //Ascending order
    while(1)
    {    
        count=0; //반복할 때마다 원소 순서 변경 횟수 카운트 초기화
        for(int i=0; i<9; i++)
        {
          if(strcmp(animals[i], animals[i+1])>0) //앞이 큰 경우 양수 리턴
            {
                strcpy(save, animals[i]);
                strcpy(animals[i], animals[i+1]);
                strcpy(animals[i+1], save);
                count++; //원소의 순서를 변경하면 카운트
            }
        }
        if(count==0) //원소의 순서를 변경하지 않으면(정렬이 완료되었으면) 반복문 탈출
            break;
    }
    printf("[Ascending order] : ");
    for(int i=0; i<10; i++)
    {
        printf("%s", animals[i]);
        if(i<9)
            printf(", ");
    }
    printf("\n");

    //Descending order
    while(1)
    {    
        count=0; //반복할 때마다 원소 순서 변경 횟수 카운트 초기화
        for(int i=0; i<9; i++)
        {
          if(strcmp(animals[i], animals[i+1])<0) //앞이 작은 경우 음수 리턴
            {
                strcpy(save, animals[i]);
                strcpy(animals[i], animals[i+1]);
                strcpy(animals[i+1], save);
                count++; //원소의 순서를 변경하면 카운트함
            }
        }
        if(count==0) //원소의 순서를 변경하지 않으면(정렬이 완료되었으면) 반복문 탈출
            break;
    }
    printf("[Descending order] : ");
    for(int i=0; i<10; i++)
    {
        printf("%s", animals[i]);
        if(i<9)
            printf(", ");
    }
    printf("\n");
    
    printf("----------------------------------\n");
    system("pause");
    return 0;
}