#include <bits/stdc++.h>
using namespace std;
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
int main(){
	int arr[] = {2,3,2,3,4,6,4,6,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int q = find_unique(arr,n);
	cout<<"your unique element is: "<<q<<endl;
    
    return 0;
}