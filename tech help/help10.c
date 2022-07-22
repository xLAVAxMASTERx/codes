#include <stdio.h>
int check(int k){
    if(k==1)
    return 0;
    else 
    return 1;
}
int main(){
  int a,b,k,s=0;
  int arr[4];
  for(int i=0;i<4;i=i+1)
  scanf("%d",&arr[i]);
  scanf("%d %d",&a ,&b);
  for (int i = a+2; i <=b+1; i++){
    k=0;
   for(int j=0;j<4;j=j+1) {
       if(arr[j]==1)
            k=check(k);
      else if(arr[j]==2){
            if(i%2==0)
                  k=check(k);  }
      else if(arr[j]==3){
            s=0;
            for(int z=0;z<=i;z=z+1)
            {
                s=s+z;
                if(s==i)
                   k=check(k);
        } }
     else if(arr[j]==4){
            for(int z=0;z<i;z=z+1){
                if((z*z)==i)
                   k=check(k);
            }}
   }
   printf("%d ",k);
    }
}