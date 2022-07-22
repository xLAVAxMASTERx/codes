#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int i,j,s=0,n,m;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i=i+1)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i=i+1){
        for(j=i;j<n;j=j+1){
            m=arr[i]-arr[j];
            m=abs(m);
            if(m>s)
            s=m;
        }
    }
    printf("%d",s);
}