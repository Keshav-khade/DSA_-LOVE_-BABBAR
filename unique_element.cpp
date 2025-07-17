#include <bits/stdc++.h>
using namespace std;

//this is the brute force approach for finding unique number
//time complexity = O(n^2) , space complexity = O(1) 
int find_unique(int arr[],int size){
    for(int i=0 ; i<size ; i++){
        int count = 0;
        for(int j=0 ; j<size ;j++){
            if(arr[i] == arr[j])
                count++;
        }
        if(count == 1)
            return arr[i];
    }
}


// better approach for doing the same problem 
// time complexity = O(n+q),space complexity = O(1)
void find_unique_hashing(int arr[],int size){
   
   int hash[100] = {0};
   int n = sizeof(hash) / sizeof(hash[0]);
   
   // precalculation
   for(int i=0; i<size ; i++){
       hash[arr[i]] += 1;
   }
   
   int q; cin>>q;
   while (q--){
       int number;
       cin>>number;
       cout<<number<<" -> "<<hash[number]<<endl;
   }
}


// this is the logic of unordered map it stores element at average case 
// and fetching is also done in constant time means overall work performs in constant time 
// time complexity O(n+q) ,space complexity is O(n) you are storing n values in map
void find_unique_hashmap(int arr[],int size){
    
    unordered_map<int ,int> mpp;
   // precalculation
   for(int i=0; i<size ; i++){
       mpp[arr[i]] += 1;
   }
   
   int q; cin>>q;
   while (q--){
       int number;
       cin>>number;
       cout<<number<<" -> "<<mpp[number]<<endl;
   }
}


// this is well optimal solution for this question but it 
// working fine when every element appears twise and one exactly once
// this is not for negative and geater than twice appearing 
// time complexity is O(n) , space = O(1)
int find_unique_xor(int arr[],int size){
          int ans = 0;
          for(int i = 0; i < size; i++){
                    ans = ans ^ arr[i];
          }
          return ans;
}
int main(){
	int arr[] = {2,3,2,3,4,6,4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int q = find_unique_xor(arr,n);
	cout<<"your unique element is: "<<q<<endl;
          return 0;
}