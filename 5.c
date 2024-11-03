#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    system("cls");
    int a;
    printf("a sonini kiritng:  ");
    scanf("%d", &a);
    int arr[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", arr[i][j]);
        } puts("");
    }
    puts("");
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", arr[i][j]);
            sum = sum + arr[j][i];    
        } puts("");
        printf("%d chi ustun yigindisi ==>  %d\n",i, sum);
    }
    return 0;
}