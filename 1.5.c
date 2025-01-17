#include<stdio.h>
int main(){
    int arr[][2] = {{2, 4} , {8, 10}};  // When initializing a 2D array, the second dimension and other dimension apart than first must be provided explicitly if the first dimension size is inferred.
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}