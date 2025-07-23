/*you are given an array and you have to find triplet means three element that adds up 
to each other and generate the sum and return that triplet in any order , question from code studio 
*/
#include <bits/stdc++.h>
using namespace std;

// brute force approach time and space is O(n^3 * nlogn) , O(n) cause of sets and vectors 
vector<vector<int>> triplet(vector<int> &arr , int target){
    int n = arr.size();
    set<vector<int>> s; // avoiding duplicate triplet
        for(int i=0 ; i<n ;i++){
            for(int j=i+1 ; j<n ;j++){
                for(int k=j+1 ; k<n ;k++){
                    int sum = arr[i] + arr[j] + arr[k];
                    if(sum == target){
                        vector<int> v = {arr[i],arr[j],arr[k]}; // avoiding same triplet with same element but with different position 
                        sort(v.begin(),v.end());
                        s.insert(v);
                        // cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<","<<endl;
                    }
                }
            }
        }
        for(auto& row : s){
            for(auto& element : row){
                cout<<element<<" ";
            }
            cout<<endl;
        }
}

// slightly better approach for doing this same problem with better optimization 
// time and space complexity wise O(n^2 * log(unique pairs)) , space O(unique pairs)
vector<vector<int>> triplet(vector<int> &arr , int target){
	int n = arr.size();
	set<vector<int>> s;
	for(int i=0 ; i<n ; i++){
		unordered_set<int> st;
		for(int j=i+1 ; j<n ; j++){
			int third = -(arr[i]+arr[j]);
			if(st.find(third) != st.end()){
				vector<int> v = {arr[i],arr[j],third};
				sort(v.begin(),v.end());
				s.insert(v);
			}
			st.insert(arr[j]);
		}
	}
	return vector<vector<int>>(s.begin(),s.end());
} 


// best optimal solution for this question using tow pointer approach 
// time and space complexity is O(n^2 * nlogn) , O(unique pairs) 
vector<vector<int>> triplet(vector<int> &nums , int target){
	int n = nums.size();
	sort(nums.begin(),nums.end());
	vector<vector<int>> ans;
	for(int i=0 ; i<n-2 ; i++){
		if(i>0 && nums[i] == nums[i-1]) continue;
		int j = i+1;
		int k = n-1;
		while( j < k){
		  int sum = nums[i]+nums[j]+nums[k];
		  if(sum == target){
			vector<int> v = {nums[i],nums[j],nums[k]};
			ans.push_back(v);
			j++;
			k--;
			while(j < k && nums[j]==nums[j-1]) j++;
			while(j < k && nums[k]==nums[k+1]) k++;
		  }else if(sum < target){
			j++;
		  }else{
			k--;
		  }
		}
	}
	return ans;		
}


int main(){
	
	vector<int> arr = {-4, -1, -1, 0, 1, 2, -1, -4, 2, 3};
	int target; cin>>target;
	
	vector<vector<int>> q = triplet(arr,target);
	for(auto &row : q){
		for(auto &element : row){
			cout<<element<<" ";
		}
		cout<<endl;
	}
	return 0;
}