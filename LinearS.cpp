// this code is about tradition linear search 
// time complexity in best case O(1) ,in worst O(n) search entire array

#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){
          for(int i=0;i<size;i++){
                    if(arr[i] == key){
                              return 1;
                    }
          }
          return 0;
}
int main(){
          int arr[10]={34,5,-5,7,9,12,43,9,2,10};
          int key ; cout<<"enter your key: ";
          cin>>key;

          bool a = search(arr,10,key);
          if(a){
                    cout<<"your key is present: "<<key;
          }else{
                    cout<<"your key is absent: "<<key;
          }
          return 0;
}