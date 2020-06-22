#include<stdio.h>
#include<stdlib.h>
int kadane(int *array,int size){
int i,max_sum,max_end,biggest;
   max_sum=0;
   max_end=0;
  // printf("%d\t%d",max_end,max_sum);
   //main loop
   biggest=array[0];
   i=0;
   while(i<size){
     
      max_end+=array[i];
      if(max_end<=0){
       
         max_end=0;
      }
      if(max_end>=max_sum){
         max_sum=max_end;
        

      }
   if(array[i]>biggest)   
      biggest=array[i];
     
     
      i++;
      

   } 

if(max_sum == 0)
   max_sum=biggest;
return max_sum;
}

int maxSubarraySumCircular(int* array, int size){
  int i,normal_kadane,total_sum,circular_kadane ;
  normal_kadane =  kadane(array,size);
 // printf("normal %d\n",normal_kadane);
  for(i=0;i<size;i++){
     total_sum=total_sum+array[i];
     array[i]=0-array[i];
  }
   circular_kadane=kadane(array,size);
  // printf("negative kadane %d\n",circular_kadane); 
   circular_kadane=total_sum+circular_kadane;
   
   if(normal_kadane<1)
      return normal_kadane;
   else if(normal_kadane>=circular_kadane)
      return normal_kadane;
   else
      return circular_kadane;
}

   


int main(){
int i,size,sum;
int *array=(int *)malloc(100*(sizeof(int)));
scanf("%d",&size);
for(i=0;i<size;i++)
   scanf("%d",&array[i]);
sum=maxSubarraySumCircular(array,size);
printf("result %d\n",sum);
}