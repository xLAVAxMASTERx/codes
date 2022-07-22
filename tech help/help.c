#include<stdio.h>
int main(){
    int n,i,j,t ;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i=i+1)
      scanf("%d",&arr[i]);
    if(n%2==0)
{
    for ( i = 0; i < n/2; i++)  
    {
        for(j=i; j< n/2; j++)
        {
        if (arr[j]>arr[i])
        {
            t=arr[i];
            arr[i] =arr[j];
            arr[j] =t;
        }
       }
    }
    for ( i = n/2; i < n; i++)
    {
        for(j=i; j< n; j++)
        {
        if (arr[j]>arr[i])
        {
            t=arr[i];
            arr[i] =arr[j];
            arr[j] =t;
        }
       }
    }
}      
else if(n%2==1)
{
    for ( i = 0; i < n/2-1; i++)
    {
        for(j=i; j< n/2-1; j++)
        {
        if (arr[j]>arr[i])
        {
            t=arr[i];
            arr[i] =arr[j];
            arr[j] =t;
        }
        }
    }
        for ( i = n/2+1; i < n; i++)
    {
        for(j=i; j< n; j++)
        {
        if (arr[j]>arr[i])
        {
            t=arr[i];
            arr[i] =arr[j];
            arr[j] =t;
        }
        }
}}
for(i=0;i<n;i=i+1)
      printf("%d ",arr[i]);
}