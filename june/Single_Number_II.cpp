#include<iostream>
#include<vector>
using namespace std;

class Solution{
   public:
      int single_element(vector<int>& num){
        int bsize= 32,result=0,x,sum;
        for(int i=0;i<bsize;i++){
            sum=0;
             x=(1<<i);
          
           for(int j=0;j<num.size();j++){
              if(num[j]& x)
                  sum++;
           }
         //   cout<<sum;
         if(sum%3)
            result |= x;
         
          
        }
        return result;
     
      }
};

int main(){
   Solution solution;
   vector<int> num {2,2,3,2};

   cout<< solution.single_element(num);

}