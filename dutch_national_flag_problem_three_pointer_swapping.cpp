#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// three pointer swapping 
void sortarr(int arr[], int n){
    
    int low = 0, mid =0 , high = n-1;
    while(mid <= high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
   
}

int main() {
    int arr[] = {2, 1, 0, 1, 0, 2, 1, 0, 2, 1, 2, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sortarr(arr, n);
    print(arr, n);
    
    return 0;
}