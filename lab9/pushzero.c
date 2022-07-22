#include<stdio.h>
int main(){
int a,c=0;
scanf("%d",&a);
int arr[a];
int b[a];
for (int i = 0; i < a; i++)
{
  scanf("%d",&arr[i]);
}
for (int i = 0; i < a; i++)
{
  if(arr[i]==0){
    b[c++]=0;
  }
}
for (int i = 0; i < a; i++)
{
  if(arr[i]!=0){
    b[c++]=arr[i];
  }
}
for (int i = 0; i < a; i++)
{
  printf("%d ",b[i]);
}
}