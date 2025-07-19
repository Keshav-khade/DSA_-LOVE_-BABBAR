/*you are given two arrays 'a' and 'b' of size
n and m respectively , both these arrays are sorted
in non- decreasing order , you have to find the 
intersection of these two arrays , if there is no 
intersection present then return a single integer '-1'
*/
// this is the question from codestudio 
// time ans space complexity is O(n) 
#include <iostream>
#include <vector>
using namespace std;
vector<int> intersection(vector<int>&arr1,int n,vector<int>&arr2,int m){
          int i=0,j=0;
          vector<int> ans;
          while(i<n && j<m){
                    if(arr1[i]==arr2[j]){
                              ans.push_back(arr1[i]);
                              i++;
                              j++;
                    }else if(arr1[i] < arr2[j]){
                              i++;
                    }else{
                              j++;
                    }
          }
          return ans;
}
int main(){
          vector<int> arr1 = {1,2,2,2,3,4};
          vector<int> arr2 = {2,2,3,3};
          int n = arr1.size();
          int m = arr2.size();
        vector<int> v = intersection(arr1,n,arr2,m);
        for(auto it : v){
          cout<<it<<" ";
        }
        return 0;
}