#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// using two pointer approach with O(n) time complexity
void sortarr(int arr[], int n){
    
    int i = 0, j = n - 1;
    
    while (i < j) {

        while ( i < j && arr[i] == 0)i++;
        
        while (i < j && arr[j] == 1) j--;
        
        if(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main() {
    int arr[] = {1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sortarr(arr, n);
    print(arr, n);
    
    return 0;
}