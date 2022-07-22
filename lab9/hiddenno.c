#include<stdio.h>
int check(int a,int n,int arr[])
{int i,m,s=0;
   for(i=0;i<n;i=i+1)
   {
       m=a-arr[i];
       s=s+m;
   }
   if(s==0)
   return 1;
   else
   return 0;
}
int main()
{
  int n,b,c,i;
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
      if(check(arr[i],n,arr)==1)
        printf("%d",arr[i]);
   }

}