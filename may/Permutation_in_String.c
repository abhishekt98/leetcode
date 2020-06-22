#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdbool.h>

//print array
void print_array(int *array){
   for (int i = 0; i < 26; i++)
   {
      /* code */
      printf("%d",array[i]);
   }
  printf("\n"); 
}

//function to set array
int *setarray(char *string){
   int i;
   int array[26];
   for ( i = 0; i < 26; i++)
   {
      array[i]=0;
      printf("%d",array[i]);
      }
   
   for(i=0;string[i];i++)
      array[string[i]%97]++;
   
   int *ptr_array=array;
   return ptr_array;
      
}
//function for reset the array
int *reset_array(int *ptr_array,int *ptr_copy_array){
   int i;
   for ( i = 0; i < 26; i++)
   {
      ptr_copy_array[i]=ptr_array[i];      
   }
   return ptr_copy_array;

   
}


//main function
bool checkInclusion(char * parent, char * child){
   int *ptr_array=setarray(child);
   int i,count,size,flag;
   print_array(ptr_array);
   //making copy of array
  /* int copy_array[26];
   int *ptr_copy_array=copy_array;
   for(i=0;i<26;i++)
      copy_array[i]=ptr_array[i];
  
   //string size in count
   size=strlen(child);
   count=size;
   flag=-1;
   i=0;
   print_array(ptr_array);
   print_array(ptr_copy_array);
   /*while(count>0 && parent[i]!='\0'){
      if(copy_array[parent[i]]>0){
         count--;
         copy_array[parent[i]]--;
         
      }
      else if(copy_array[parent[i]]==0){
         ptr_copy_array=reset_array(ptr_array,ptr_copy_array);
         count=size;
      }
      else
      {
         ptr_copy_array=reset_array(ptr_array,ptr_copy_array);
      
         count=size;
      }
      if(i>5){
         flag=0;
         break;
      }
      i++;
   printf("loop %d",i);
   print_array(ptr_copy_array);
   }*/

   if(flag=-1)
      return false;
   else
      return true;

}



int main(){
   int i;
   char *parent=(char *)malloc(100*(sizeof(char)));
   char *child=(char *)malloc(100*(sizeof(char)));
   scanf("%s",parent);
   scanf("%s",child);
  
   bool result=checkInclusion(parent,child);
   printf("%d",result);
  

}