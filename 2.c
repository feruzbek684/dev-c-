#include <stdio.h>
int main () {
    system("cls");
    int a, b, index = 0;
    printf("qator , ustun:  ");
    scanf("%d%d", &a,&b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
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
        if (i % 2 != 0)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d ", arr[i][j]);
            } puts("");
        }
        

    }


    
    return 0;
}