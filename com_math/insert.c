#include <stdio.h>
#include <string.h>

int main(void)
{
    char cities_asc[10][10]={"Seoul", "Tokyo", "NewYork", "Paris", "London", "Barcelona", "Monaco", "Hongkong", "Dortmund", "Canberra"};
    char cities_des[10][10]={"Seoul", "Tokyo", "NewYork", "Paris", "London", "Barcelona", "Monaco", "Hongkong", "Dortmund", "Canberra"};
    char save[10];
    int j;

    printf("Insertion Sort (global big cities)\n");
    printf("----------------------------------\n");
    
    //Ascending order
    for(int i=1; i<10; i++) //삽입 정렬은 두번째 원소부터 정렬 시작
    {
        strcpy(save, cities_asc[i]); //배열할 원소 저장. 
        for(j=i-1; j>=0; j--) //배열할 원소의 앞 원소부터 비교해 나간다. 맨 앞부터 비교할 때 정렬 순서를 바꾼다면 여러개를 이동시켜야 하므로 정렬할 원소 앞부터 비교하는 것이 효과적이다.
        {
            if(strcmp(cities_asc[j],save)>0) //비교, strcmp는 앞의 값이 크면 양수, 뒤의 값이 크면 음수를 리턴한다.
                strcpy(cities_asc[j+1], cities_asc[j]); //앞의 값이 클 경우 원소를 한칸 뒤로 이동시킨다.
            else
                break; //앞의 값이 크지 않을 경우 배열을 변경하지 않고 탈출.
        }
        strcpy(cities_asc[j+1], save); //올바른 위치에 삽입.(j가 for문을 탈출하면서 -1되므로 올바른 위치에 넣기 위해서는 +1을 해야 한다)
    }
    printf("[Ascending order] : ");
    for(int i=0; i<10; i++)
    {
        printf("%s", cities_asc[i]);
        if(i<9)
            printf(", ");
    }
    printf("\n");

    //Descending order
    for(int i=1; i<10; i++)
    {
        strcpy(save, cities_des[i]); //배열할 원소 저장.
        for(j=i-1; j>=0; j--) //배열할 원소의 앞 원소부터 비교해 나간다.
        {
            if(strcmp(cities_des[j],save)<0) //비교, strcmp는 앞의 값이 크면 양수, 뒤의 값이 크면 음수를 리턴한다.
                strcpy(cities_des[j+1], cities_des[j]); //앞의 값이 작을 경우 원소를 한칸 뒤로 이동시킨다.
            else
                break; //앞의 값이 작지 않을 경우 배열을 변경하지 않고 탈출.
        }
        strcpy(cities_des[j+1], save); //올바른 위치에 삽입.
    }
    printf("[Descending order] : ");
    for(int i=0; i<10; i++)
    {
        printf("%s", cities_des[i]);
        if(i<9)
            printf(", ");
    }
    printf("\n");
    
    printf("----------------------------------\n");
    system("pause");
    return 0;
}