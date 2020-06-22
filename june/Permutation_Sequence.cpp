#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;


class Solution {
public:
    string getPermutation(int n, int k) {
       
        string ans;
         int j,i;
        vector<int> numbers(n+1);
       numbers[0]=-1;
       
        for ( i = 1; i <= n; i++){
               numbers[i]=i;}
       
         while(k>1){
            int result;
            result=k/this->fact(n-1);
            k=k%this->fact(n-1);
            n--;
            int count=0;
            if(k==0)
               result--;
            for( j=1;j<numbers.size();j++){
               if(numbers[j]!=-1)
                  count++;
               if(count==result+1)
                  break;
            }
           
            ans.append(to_string(numbers[j]));
         
            numbers[j]=-1;
            
            if(k==1)
               break;
        }
        // cout<<ans<<endl;
       
        for(i=1,j=numbers.size()-1;i<numbers.size();i++,j--){
          
          
              if(k==1){
                 if(numbers[i]!=-1){
                      ans.append(to_string(numbers[i]));
                     //cout<<"i="<<i<<endl;
                 }
              }
              if(k==0){
                 if(numbers[j]!=-1){
                   ans.append(to_string(numbers[j]));
                   //cout<<"j="<<j<<endl;
                 }
          }

        }  
       
   return ans;
    }

    int fact(int n){
       if(n==1)
       return 1;
       else
       {
            return n*fact(n-1);
       }
      
    }
};

int main(){
   Solution solution;
  
  string result =solution.getPermutation(1,1);
  //cout<< result;
  for (size_t i = 1; i <= 24; i++)
  {
     cout<<solution.getPermutation(4,i)<<endl;
  }
  

   return 0;
}