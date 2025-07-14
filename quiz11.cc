#include <iostream>
#include <limits.h>

using namespace std;

int main(){

          // this is for finding maximum element in an array 
          int arr[7] = {15, 3, 9, 27, 6, -4, 18};
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
          return 0;
}