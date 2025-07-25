#include <bits/stdc++.h>
using namespace std;

// finding second smallest in an array 
void second_smallest(int arr[],int size){
          int first=INT_MAX , second = INT_MAX;

	for(int i=0 ; i<size ; i++){
	    if(arr[i] < first){
                    second = first;
	          first = arr[i] ; 
	    }else if(arr[i] < second && arr[i] > first){
                    second = arr[i];
              }
	}
          cout<<"your second smallest element is: "<<second<<endl;

}


// finding second largest using one traversal on an array optimal approach 
void second_largest(int arr[],int size){

          int first=INT_MIN , second = INT_MIN;

	for(int i=0 ; i<size ; i++){
	    if(arr[i] > first){
                    second = first;
	          first = arr[i] ; 
	    }else if(arr[i] > second && arr[i] < first){
                    second = arr[i];
              }
	}
          cout<<"your second largest element is: "<<second<<endl;
}


// using brute approach with O(n) time complexity
void maximum(int arr[],int size){
          int max = arr[0];
	for(int i=0 ; i<size ; i++){
	    if(arr[i] > max){
	        max = arr[i] ; 
	    }
	}
          cout<<"your maximum is: "<<max<<endl;
}


// for find minimum element in an array 
void minimum(int arr[],int size){
          int min = arr[0];
	for(int i=0 ; i<size ; i++){
	    if(arr[i] < min){
	        min = arr[i] ; 
	    }
	}
          cout<<"your minimun is: "<<min<<endl;
}
int main(){
          int arr[] = {1,-1,-6,5,20,7,10,-9,-8,5,6,-12};
	int length = sizeof(arr) / sizeof(arr[0]);

          minimum(arr,length);
          maximum(arr,length);
          second_largest(arr,length);
          second_smallest(arr,length);

          return 0;
}
