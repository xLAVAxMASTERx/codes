#include<stdio.h>
int main(){
    int i,n,m=0,h;
    scanf("%d",&h);
    n=2*h;
    int arr[n];
    int brr[n];
    for(i=0;i<n;i=i+1)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i=i+1){
        if(i%2==0)
        brr[i]=arr[m];
        else{
        brr[i]=arr[n/2+m];
        m++;
        }
    }
   for(i=0;i<n;i=i+1)
   printf("%d ",brr[i]);
}