#include<stdio.h>
int main()
{ 
    int i,m,j,k;
int n,b,c;
  printf("Enter number");
  scanf("%d",&n);
  int arr[n];
   printf("Enter number");
  for(i=0;i<n;i=i+1)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i=i+1)
   {
       for(j=i;j<n;j=j+1)
    {
       if(arr[j]>arr[i])
       {
           k=arr[j];
           arr[j]=arr[i];
           arr[i]=k;
       }
    }
  
   }
printf("largest %d",arr[0]);
printf("smallest %d",arr[n-1]);
   }