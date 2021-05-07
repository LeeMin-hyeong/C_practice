#include <stdio.h>
#include <string.h>

int main(void)
{
    char cities[10][10]={"Seoul", "Tokyo", "NewYork", "Paris", "London", "Barcelona", "Monaco", "Hongkong", "Dortmund", "Canberra"};
    char save[10];
    int j;

    printf("Insertion Sort (global big cities)\n");
    printf("----------------------------------\n");
    
    //Ascending order
    for(int i=1; i<10; i++)
    {
        strcpy(save, cities[i]); //배열할 원소 저장. 
        for(j=i-1; j>=0; j--) //배열할 원소의 앞 원소부터 비교해 나간다.
        {
            if(strcmp(cities[j],save)>0) //비교, strcmp는 앞의 값이 크면 양수, 뒤의 값이 크면 음수를 리턴한다.
                strcpy(cities[j+1], cities[j]); //앞의 값이 클 경우 원소를 한칸 뒤로 이동시킨다.
            else
                break; //앞의 값이 크지 않을 경우 배열을 변경하지 않고 탈출.
        }
        strcpy(cities[j+1], save); //올바른 위치에 삽입.(j가 for문을 탈출하면서 -1되므로 올바른 위치에 넣기 위해서는 +1을 해야 함)
    }
    printf("[Ascending order] : ");
    for(int i=0; i<10; i++)
    {
        printf("%s", cities[i]);
        if(i<9)
            printf(", ");
    }
    printf("\n");

    //Descending order
    for(int i=1; i<10; i++)
    {
        strcpy(save, cities[i]); //배열할 원소 저장.
        for(j=i-1; j>=0; j--) //배열할 원소의 앞 원소부터 비교해 나간다.
        {
            if(strcmp(cities[j],save)<0) //비교, strcmp는 앞의 값이 크면 양수, 뒤의 값이 크면 음수를 리턴한다.
                strcpy(cities[j+1], cities[j]); //앞의 값이 작을 경우 원소를 한칸 뒤로 이동시킨다.
            else
                break; //앞의 값이 작지 않을 경우 배열을 변경하지 않고 탈출.
        }
        strcpy(cities[j+1], save); //올바른 위치에 삽입.
    }
    printf("[Descending order] : ");
    for(int i=0; i<10; i++)
    {
        printf("%s", cities[i]);
        if(i<9)
            printf(", ");
    }
    printf("\n");
    
    printf("----------------------------------\n");
    system("pause");
    return 0;
}