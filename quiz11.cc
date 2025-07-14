#include <iostream>
#include <limits.h>
#include <algorithm>  // for max_element, min_element
using namespace std;

int main(){

          // this is for finding maximum element in an array 
          int arr[7] = {15, 3, 9, 27, 6, -4, 18}; // array declaration 


          int max = INT_MIN ;
          for(int i=0;i<7;i++){ 
                    if(arr[i] > max){
                              max = arr[i];
                    }
          }
          cout<<"our maximum element is "<<max<<endl;


          // this is for finding minimum value in an array 
          int min = INT_MAX ;
          for(int i=0;i<7;i++){ 
                    if(arr[i] < min){
                              min = arr[i];
                    }
          }
          cout<<"our minimum element is "<<min<<endl;

          // using STL C++ YOU CAN ALSO GET *MAXI AND *MINI
          int n = sizeof(arr) / sizeof(arr[0]);

          int maxVal = *max_element(arr, arr + n);
          int minVal = *min_element(arr, arr + n); // always remember it returns iterator you just have to dereference it 

          cout << "Maximum element: " << maxVal << endl;
          cout << "Minimum element: " << minVal << endl;

          // using sorting technique if array is already not sorted
          sort(arr, arr + n);

          cout << "Minimum element: " << arr[0] << endl;
          cout << "Maximum element: " << arr[n - 1] << endl;

          return 0;
}