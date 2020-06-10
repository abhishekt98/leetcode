#include<iostream>
#include<vector>
using namespace std;
class Solution {
    
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
       if(!people.size()){
         
          return people;
       }
       else{
          vector<vector<int>> realpeople(people.size(),vector<int>(people[0].size()));
      //sort the people with respect to height
      for (int i=0; i<people.size()-1;i++){
         for(int j=i+1;j<people.size();j++){
            if(people[i][0]>people[j][0]){
               int temp=people[i][0];
               people[i][0]=people[j][0];
               people[j][0]=temp;
               temp=people[i][1];
               people[i][1]=people[j][1];
               people[j][1]=temp;
            }
         }
      }
     
      //initialise all element -1 in realpeople array
      for ( int i=0; i<people.size();i++)
         for(int j=0;j<people[i].size();j++)
            realpeople[i][j]=-1;
      //main function
     
     for(int i=0;i<people.size();i++){
        int count=people[i][1];
         for(int j=0;j<realpeople.size();j++){
            
           
            if(count==0 && realpeople[j][0]==-1){
               //adding to array
               realpeople[j][0]=people[i][0];
               realpeople[j][1]=people[i][1];
               break;
            }
            else if(count!=0 && (realpeople[j][0]==-1 || realpeople[j][0]==people[i][0])){
               count--;
            }
         }
      }
      /*cout<<endl;
      for ( int i=0; i<realpeople.size();i++){
         for(int j=0;j<realpeople[i].size();j++)
            cout<< realpeople[i][j]<<" ";
         cout<< endl;
            
   }  */
   return realpeople;
}

}

};
int main(){
   Solution solution;
    vector<vector<int>> vect {};
    vector<vector<int>> ordered_people;
    ordered_people = solution.reconstructQueue(vect);

     for ( int i=0; i<ordered_people.size();i++){
         for(int j=0;j<ordered_people[i].size();j++)
            cout<< ordered_people[i][j]<<" ";
         cout<< endl;
            
   }
  
 
   return 0;
}