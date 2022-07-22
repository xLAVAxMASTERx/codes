#include<stdio.h>
int main(){
    int j,n,i,k=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i=i+1)
    scanf("%d",&arr[i]);                       
    for( i=0; i<n;i=i+1) {
        for( j=0;j<n;j=j+1) {
        if(arr[i]>arr[j])
            k+=1;
        }
        printf("%d ",k);
        k=0;
         }
}
 