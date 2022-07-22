int main() {
// array with all triangle numbers upto 1000
   int triangular_numbers[]={1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153,
   171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496,
   528, 561, 595, 630, 666, 703, 741, 780, 820, 861, 903, 946, 990};
   // calculating the size of triangular_numbers array
   int size_of_triangular = sizeof(triangular_numbers) / sizeof(triangular_numbers[0]);
  
   // array with all square numbers upto 1000
   int squares[]={1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289,
   324, 361, 400, 441, 484, 529, 576, 625, 676, 729, 784, 841, 900, 961};
   // calculating the size of squares array
   int size_of_squares = sizeof(squares) / sizeof(squares[0]);
  
   // initially all lockers are closed, hence we initialize with 0
   int lockers[1000]={};
  
   // since they are 4 kids, we take cases = 4
   int i,x,cases=4;
   int range1,range2;
  
   // we take kids numbers one by one and apply operations on lockers as per kids behaviour
   while(cases--){
   scanf("%d",&x);
   // kid 1 switches the states of all lockers
   if (x==1){
   for(i=0;i<1000;i++){
   // if locker is closed
   if (lockers[i]==0)
   // locker is opened
   lockers[i]=1;   
   // if locker is opened
   else
   // locker is closed
   lockers[i]=0;   
   }
   }
   // kid 2 switches the states of all lockers with even numbers
   // i.e, odd numbers in our case, since array index start with 0
   else if(x==2){
   for(i=0;i<1000;i++){
   if (i%2!=0){
   if (lockers[i]==0)
   lockers[i]=1;
   else
   lockers[i]=0;
   }
   }
   }
   // kid 3 switches the states of all lockers with triangle numbers
   // we iterate through the triangular_numbers array to switch the lockers
   else if(x==3){
   for(i=0;i<size_of_triangular;i++){
   // since array index starts with 0, we subtract 1 from every triangle number
   if (lockers[triangular_numbers[i]-1]==0)
   lockers[triangular_numbers[i]-1]=1;
   else
   lockers[triangular_numbers[i]-1]=0;
   }
   }
   // kid 3 switches the states of all lockers with square numbers
   // we iterate through the squares array to switch the lockers
   else if(x==4){
   for(i=0;i<size_of_squares;i++){
   // since array index starts with 0, we subtract 1 from every square number
   if (lockers[squares[i]-1]==0)
   lockers[squares[i]-1]=1;
   else
   lockers[squares[i]-1]=0;
   }
   }
   }
   scanf("%d %d",&range1,&range2);
   for(i=range1+1;i<range2+1;i++){
   printf("%d ",lockers[i]);
   }
   return 0;
}