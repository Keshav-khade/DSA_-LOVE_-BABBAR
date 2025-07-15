#include <iostream>
using namespace std;

void print(int arr[],int size){
          for(int i=0;i<size;i++){
                    cout<<arr[i]<<" ";
          }
}

//swaping alternative element using prebuild swap function 
int main(){
          int arr[] = {2,3,4,5,8};
          int n = sizeof(arr)/sizeof(arr[0]);
          for(int i=0;i<n;i+=2){
                    if((i+1) < n){ // ensures any undefined behaviour
                        swap(arr[i],arr[i+1]);       
                    }
          }
          print(arr,n);
          return 0;
}

// swapping using manual way or traditional way 
int main(){
          int arr[] = {2,3,4,5,8};
          int n = sizeof(arr)/sizeof(arr[0]);
          int temp;  // we have required another variable to hold values 
          for(int i=0;i<n;i+=2){
                    if((i+1) < n){
                              temp = arr[i+1];
                              arr[i+1] = arr[i];
                              arr[i] = temp;   
                    }
          }
          print(arr,n);
          return 0;
}