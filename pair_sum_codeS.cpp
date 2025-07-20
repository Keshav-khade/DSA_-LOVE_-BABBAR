/*you are given an array of size n and an
integer s , your task is to return the list 
of all pairs of elements such taht each sum
of elements of each pair equals s,
remember each pair should be sorted that means 
first value is always less than or equals to the second value 
return the list or pair sorted in non-decreasing order of their first value.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pair_sum(vector<int>&arr , int n , int target){
          vector<vector<int>> ans;
          for(int i=0; i<n ; i++){
                    for(int j=i+1 ; j<n ;j++){
                              if(arr[i]+arr[j] == target){
                                        vector<int> v;
                                        v.push_back(min(arr[i],arr[j]));
                                        v.push_back(max(arr[i],arr[j]));
                                        ans.push_back(v);
                              }
                    }

          }
          sort(ans.begin(),ans.end());
          return ans;
}
int main(){
        vector<int> arr = {3, -1, 7, 5, -3, 2, 8, -2, 0, 4};
        int n = arr.size();
        int target; cout<<"enter the target: ";
        cin>>target;

       vector<vector<int>> v = pair_sum(arr,n,target);
       for(const auto& row : v){
          for(const auto& element: row){
                    cout<<element<<" ";
          }
          cout<<endl;
       }
        return 0;
}