/*Given an array of integers arr, 
return true if the number of occurrences of each 
value in the array is unique or false otherwise
*/
// 1207. Unique Number of Occurrences (Leetcode)
// time and space complexity is O(n) linear

#include <bits/stdc++.h>
using namespace std;

bool unique(int arr[] , int size){

    unordered_map<int,int> mpp ;
    unordered_set<int> set;

    // precalculations
    for(int i=0; i<size ;i++){
        mpp[arr[i]] += 1;
    }
    
    for(auto it : mpp){
        if(set.count(it.second)){
            return false;
        }
        set.insert(it.second);
    }
    
    return true;
}
int main(){
	int arr[] = {1,-2};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	bool q = unique(arr,n);
	
	if(q){
	    cout<<"true";
	}else {
	    cout<<"false";
	}
    return 0;
}
