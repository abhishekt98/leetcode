

#include<stdio.h>
#include<stdlib.h>
//push
int push(char *result,char digit,int stk_top){
   stk_top++;
   result[stk_top]=digit;
   return stk_top;
}
//pop
int  pop(char *result,int stk_top){
   stk_top--;
   return stk_top;
}


//function
char * removeKdigits(char * num, int k){
printf("program starting\n");
char *result=(char *)malloc(100*(sizeof(char)));
int stk_top,i,size;
stk_top=-1;
stk_top=push(result,num[0],stk_top);
//printf("%d\t%d\t%s\n",k,stk_top,result);
for(i=0;num[i]!='\0';i++);
size=i;
i=1;
while(i<size){ 
    if(result[stk_top]<=num[i] || k<1){
         stk_top=push(result,num[i],stk_top);
         i++;
    }
    else if(k>0){
      stk_top=pop(result,stk_top);
      k--;
    }
   
  //printf("%d\t%d\t%s\n",k,stk_top,result);
}
for(i=k;i>0;i--)
   stk_top--;
result[stk_top+1]='\0';
i=0;
//printf("%d\n",result);
while(i==0){
   if(result[i]!='0')
      break;
   else 
      result++;
}
return result;
}


int main(){
   char *num=(char *)malloc(100*(sizeof(char)));
   int k;
  
   scanf("%s",num);
   scanf("%d",&k);
   num=removeKdigits(num,k);
   printf("%s",num);

}