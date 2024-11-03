#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int n;
    printf("n sonini kiritng:  ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }puts("");
        
    }
int katta = 0;
    for (int i = 0; i < n; i++)
    {
        katta = arr[0][i];
        for (int j = 1; j < n; j++)
        {
            if (arr[j][i] > katta)
            {
                katta = arr[j][i];
            }
            
        }
        printf("%d chi ustunni katta elementi %d\n",i, katta);
    }

    return 0;
}