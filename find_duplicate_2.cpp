/*Given an integer array nums of length n 
where all the integers of nums are in the range [1, n]
and each integer appears at most twice,
return an array of all the integers that appears twice.
You must write an algorithm that runs in O(n) time and 
uses only constant auxiliary space,excluding the space
needed to store the output
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


// this approach is based on hashmap but this takes linear time and space
vector<int> findDuplicates(vector<int>& nums){
        int n = nums.size();
        unordered_map<int,int> mpp;

        for(int i=0; i<n ;i++){
            mpp[nums[i]] += 1;
        }

        vector<int> v;
        for(auto it : mpp){
            if(it.second == 2){
                v.push_back(it.first);
            }
        }
        return v;
}


// this approach is based on marking values that is present in array 
// and whenever it appears twice return it 
vector<int> findDuplicates(vector<int>&nums){
          int n = nums.size();
          vector<int> result;
          for(int i=0 ; i<n ;i++){
                    int index = abs(nums[i]) -1;
                    int val = nums[index];
                    if(val < 0 ){
                            result.push_back(index+1);  
                    }else{
                              nums[index] *= -1 ;
                    }
          }
          return result ;
}
int main(){
          vector<int> arr ={4,3,2,7,8,2,3,1};
         vector<int> v = findDuplicates(arr);
          for(auto it: v){
                    cout<<it<<" ";
          }
          return 0;
}
    