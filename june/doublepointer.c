
#include <stdio.h> 
#include <stdlib.h> 

int twoCitySchedCost(int** costs, int costsSize, int * costsColSize){
 
 int sum=0,i,j,big,count=1,r,c,acount,bcount;
 acount=0;
 bcount=0;
 
 while(acount<costsSize/2 && bcount<costsSize/2){
    r=-1;
    c=-1;
    big=-1;
    
   for(i=0;i<costsSize;i++)
      for(j=0;j<* costsColSize;j++)
         if(costs[i][j]>big){
         big=costs[i][j];
         r=i;
         c=j;
         }
   
   sum=sum+costs[r][(c+1)%2];
   
   costs[r][c]=-1;
   costs[r][(c+1)%2]=-1;
   if(c==1)
      acount++;
   else
   {
      /* code */ bcount++;
   }
   
  

 }

 if(acount==costsSize/2){
    for(i=0;i<costsSize;i++)
      if(costs[i][1]!=-1)
         sum=sum+costs[i][1];
 }
 else
 {
    for(i=0;i<costsSize;i++)
      if(costs[i][0]!=-1)
         sum=sum+costs[i][0];
 }
 /*
for (i = 0; i <  costsSize; i++) {
      for (j = 0; j < * costsColSize; j++){
         printf("%d ", costs[i][j]);
      }
      printf("\n");
      } */
 
  return sum; 

}


int main() 
{ 
    int r = 4, c = 2, i, j, count,a; 
   int *ptr=&c;
    int **costs = (int **)malloc(r * sizeof(int *)); 
    for (i=0; i<r; i++) 
         costs[i] = (int *)malloc(c * sizeof(int)); 
  
    // Note that costs[i][j] is same as *(*(costs+i)+j) 
    count = 0; 
    for (i = 0; i <  r; i++) 
      for (j = 0; j < c; j++) 
         scanf("%d",&costs[i][j]);  // OR *(*(costs+i)+j) = ++count 
  
   for (i = 0; i <  r; i++) {
      for (j = 0; j < c ; j++){
         printf("%d ", costs[i][j]);
      }
      printf("\n");
      } 
   
   a=twoCitySchedCost(costs,r,ptr);
   printf("%d",a);
   return 0; 
} 
