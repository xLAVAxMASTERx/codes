#include <stdio.h>
int colour(int a){
  int k= a%5;
  if(k==1)
    printf("P");
  if(k==2)
    printf("B");
  if(k==3)
    printf("G");
  if(k==4)
    printf("Y");
  if(k==0)
    printf("O");}
int main(){
  int a,b,n;
  printf("Enter number of natural numbers");
  scanf("%d",&n);
  int arr[n];
  printf("Enter  natural numbers");
  for (int i = 0; i <n; i++)
    scanf("%d",&arr[i]);  
   for (int i = 0; i <n; i++)
    colour(arr[i]); 
}