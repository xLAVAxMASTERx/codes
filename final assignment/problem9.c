#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }
    for (int i = n/2; i < n; i++){
        for (int j = 0; j < n; j++)
            arr[i][j] = arr[i][j] + arr[(n-i-1)][j];
    }
    for (int i = n/2; i < n; i++){
        for (int j = 0; j < n/2; j++)
            arr[i][j] = arr[i][j] + arr[i][(n-j-1)];
    }
    for (int i = n/2; i < n; i++) {
        for (int j = 0; j < n/2; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}