#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    system("cls");
    int a, b, index = 0;
    printf("qator , ustun:  ");
    scanf("%d%d", &a,&b);
    int arr[a][b];
    srand(time(0));
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr[i][j] = rand()%90 + 10;
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        } puts("");
    }
    puts("");

    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d ", arr[i][j]);
            } puts("");
        }
        

    }


    
    return 0;
}