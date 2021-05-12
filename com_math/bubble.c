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
        count=0;
        for(int i=0; i<9; i++)
        {
          if(strcmp(animals[i], animals[i+1])>0)
            {
                strcpy(save, animals[i]);
                strcpy(animals[i], animals[i+1]);
                strcpy(animals[i+1], save);
                count++;
            }
        }
        if(count==0)
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
        count=0;
        for(int i=0; i<9; i++)
        {
          if(strcmp(animals[i], animals[i+1])<0)
            {
                strcpy(save, animals[i]);
                strcpy(animals[i], animals[i+1]);
                strcpy(animals[i+1], save);
                count++;
            }
        }
        if(count==0)
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