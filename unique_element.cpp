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

int main(){
	int arr[] = {2,3,2,3,4,6,4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	find_unique_hashing(arr,n);
	
          return 0;
}