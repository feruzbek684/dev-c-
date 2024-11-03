#include <stdio.h>


int main () {
    system("cls");
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int yig = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%2d  ", arr[i][j]);
            yig =yig + arr[i][j];
        }
        puts(""); 
    }

    printf("\n\narraydagi sonlarni yigindisi ==>  %d", yig);

    return 0;
}