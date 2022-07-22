#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void fold(int arr[], int n){
    for(int i = 0; i < n/2; i++){
        arr[i] = arr[i] + arr[n-1-i];  
        arr[n-1-i] = 0;             
    }
    return;
}
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);   
    }
    printf("\n");
    return;
}
int main(int argc, char* argv[]){
    int size;                         
    scanf("%d", &size);
    int* arr = (int*)malloc(size*sizeof(int));   
    for(int i = 0; i < size; i++){    
        scanf("%d", &arr[i]);
    }   
    int K;                            
    scanf("%d", &K);
    for(int j = 0; j < K; j++){       
        fold(arr, size);              
        size = ceil(size/2.0);        
    }
    printArray(arr, size); 
    free(arr);

    return 0;
}