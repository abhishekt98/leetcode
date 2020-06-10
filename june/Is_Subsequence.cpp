#include<iostream>
using namespace std;
class solution{
   public:
      bool issubsequence(string s,string t){
         int i,j,s_size,t_size,flag;
         s_size=s.length();
         t_size=t.length();
         flag=-1;
         j=0;
         if(s_size==0)
            return true;
         for(i=0;i<t_size;i++){
            if(t[i]==s[j]){
               j++;
               s_size--;
            } 
            if(s_size==0)
               return true;  
         }
         if(s_size!=0)
            return false;
        
      }
};

int main(){
   solution sol;
   bool result=sol.issubsequence("","");
   cout<<result;
   return 0;
}