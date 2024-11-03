#include <stdio.h>
int main () {
    system("cls");
    int n;
    printf("n ni kiritng: ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    printf("\narray sonlari \n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }puts("");
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] *= arr[i][j];
            if (arr[i][j] % 2 == 0)
            {
                arr[i][j] = 0;
            }
            
        }
        
    }
    printf("\n\n natija \n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%2d ", arr[i][j]);
        }puts("");
        
    }
    return 0;
}