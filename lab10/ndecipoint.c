#include <stdio.h>
#include<math.h>

int main(){
  int a,b,n,k,m,j,i;
  printf("Enter number of deci");
  scanf("%d",&n);
   printf("Enter number");
  scanf("%d/%d ",&a,&b);
  a=a*pow(10,n);
  k=a/b;
  j=k;
  while(j>0)
  {   
      j=j%10;
      j=j/10;
      m=m+1;
  }
 
  if(n>m)
  {
    int arr[n+2];
    
    arr[n+2-1]=0;
    arr[n]=-1; 
    int v=0;
    for(i=0;i<n;i=i+1)
    arr[i]=0;

    while(k!=0)
    {
      int q=k%10;
      arr[v]=q;
      k=k/10;
      v=v+1;
    }
    for(i=n+1;i>=0;i=i-1)
    {
    printf("%d",arr[i]);
  }
  

}