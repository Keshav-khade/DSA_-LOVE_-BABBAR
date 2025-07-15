#include <iostream>
#include <numeric>
using namespace std;
int main(){
          int arr[] ={1,4,6,2,8,4,5,-7,9,3};
          int n = sizeof(arr) / sizeof(arr[0]);
          int sum = 0;
          for(int i=0;i<n;i++){
                    sum += arr[i];
          }
          cout<<"sum of all element in an array: "<<sum<<endl;
          
          
          //by using accumulate function which is present in <numeric> library 
          int sum1 = accumulate(arr , arr+n , 0);
          cout<<"new sum is sum1:"<<sum1<<endl;
          

          return 0;
}