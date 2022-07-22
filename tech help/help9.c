#include <stdio.h>
int main(){
  int a,b,i,k,j,z,s=0;
  int arr[4];
  for(i=0;i<4;i=i+1)
  scanf("%d",&arr[i]);
  scanf("%d %d",&a ,&b);
  for (int i = a; i <=b; i++)
  {
      k=0;
   for(j=0;j<4;j=j+1)
   {
       if(arr[j]==1){
           if(k==0){
           k=1;
           break;}
           else if(k==1){
           k=0;
           break;}
       }
       else if(arr[j]==2){
           if(arr[i]%2==0){
             if(k==0){
           k=1;
           break;}
           else if(k==1){
           k=0;
           break;}
           }}
        else if(arr[j]==3){
            for( z=0;z<arr[i];z=z+1){
                s=0;
                s=s+arr[i];
                if(s==arr[i]){
                 if(k==0){
           k=1;
           break;}
           else if(k==1){
           k=0;
           break;}
                }
            }
        }   
        else if(arr[j]==4){
            for( z=0;z<arr[i];z=z+1){
                if((z*z)==arr[i]){
                  if(k==0){
           k=1;
           break;}
           else if(k==1){
           k=0;
           break;}
                }
            }
        }
   }
   printf("%d ",k);
    }
  }
    