/*Given two integer arrays nums1 and nums2, 
return an array of their intersection. 
Each element in the result must be unique and you may 
return the result in any order. leetcode 349.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// this is one of the optimal solution ever present 
// time complexity= O(n+m+n) , space complexity is O(n)
vector<int> intersection(vector<int>&arr1,vector<int>&arr2){
       unordered_set<int> set1(arr1.begin(),arr1.end());
       unordered_set<int> result;
       for(auto it : arr2){
          if(set1.count(it)){
                    result.insert(it);
          }
       }
       return vector<int>(result.begin(),result.end());
}
int main(){
          vector<int> arr1 = {4,9,5};
          vector<int> arr2 = {9,4,9,8,4};
          
          vector<int> v = intersection(arr1,arr2);
          for(auto it : v){
                    cout<<it<<" ";
          }
          return 0;
}