#include<stdio.h>

int singleNonDuplicate(int* nums, int numsSize){
   int i,result;
    for(i=0;i<numsSize;i+=2)
        if(nums[i]!=nums[i+1])
            return nums[i];
    return 0;
}


void main(){

   int nums[1]={1};
   int numsSize=3;
   printf("%d",singleNonDuplicate(nums,numsSize));

   
}