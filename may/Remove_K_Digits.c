#include<stdio.h>
#include<stdlib.h>
//function to find size
//function
char * removeKdigits(char * num, int k){
char *result=(char *)malloc(100*(sizeof(char)));
int size,j,i;
    
    for(i=0;num[i]!='\0';i++);
    size=i;
    //printf("%d",i);
    j,i=0;
    while(num[i]!='\0'){
    
    if(num[i]>num[i+1] && i!=size-1){
        i++;
        k--;
    }   
    else{
        result[j]=num[i];
        j++;
        i++;
    }
    if(k==(size-(i)))
        break;
    
    
        
   }
    printf("%s",result);
    return result;
}

int main(){
   char *num=(char *)malloc(100*(sizeof(char)));
   int k;
  
   scanf("%s",num);
   scanf("%d",&k);
   num=removeKdigits(num,k);
  // printf("%s",num);

   

}
