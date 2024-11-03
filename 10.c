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
            printf("%2d ", arr[i][j]);
        }puts("");
        
    }

    puts("\n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > 0)
            {
                printf("musbat son %d \n\n", arr[i][j]);
            }else if (arr[i][j] < 0)
            {
                printf(" manfiy son %d ", arr[i][j]);
            }  
        }
        
    }
    return 0;
}