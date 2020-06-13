#include<stdio.h>

void print(int num[],int size){
   for(int i=0;i<size;i++)
      printf("%d\t",num[i]);
   printf("\n");
}

void main(){
   int r,w,b;
   int num[6]={0,0,2,1,1,0};
   r=-1;w=-1;b=-1;
   for (int i = 0; i < 6; i++){
      if(num[i]==0){
            r++;
            num[r]=0;
            if(w!=-1){
               w++;
               num[w]=1;
               }
            if(b!=-1){
               b++;
               num[b]=2;
            }
      }
      else if(num[i]==1){
         if(w==-1)
            w=r+1; 
         else 
            w++;
         num[w]=1;
         if(b!=-1){
               b++;
               num[b]=2;
            }
         
      }
      else{
         if(b==-1){
            if(w!=-1)
               b=w+1;
            else
               b=r+1;
         }
            
         else
            b++;
         num[b]=2;

      }
   
   print(num,6);
 }
}
