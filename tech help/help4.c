#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    char string[n];
    scanf("%s", string);
    for(int i = 0; i<strlen(string); i++){
        if(string[i] == 'O')
            printf("%d ", i);
    }
    return 0;
}
 
