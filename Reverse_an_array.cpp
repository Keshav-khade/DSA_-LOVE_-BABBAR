#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
void reverseArray(T arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

          reverseArray(arr, n);

          for(int i = 0; i < n; i++)
                    cout << arr[i] << " ";

          cout<<"\n";
          reverse(arr, arr + n);// using inbuild function 
          for(int i = 0; i < n; i++)
                    cout << arr[i] <<" ";

          cout<<endl;
          // using STL vector dynamic array's          
          vector<float> v = {1.1, 2.2, 3.3, 4.4};
          reverse(v.begin(), v.end());

          for (float x : v)
                    cout << x << " ";
}
