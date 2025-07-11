/*Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.
*/
#include<iostream>  
using namespace std;
// int main(){
//           int n;                                    
//           cin>>n;
//           if(n<=0){
//               cout<<"false";
//           }else{
//                     while(n%2==0){
//                               n=n/2;}
//                     if(n==1){
//                         cout<<"true";      
//                     }else{
//                         cout<<"false";      
//                     }     
//           }
//           return 0;
// } 
/* this code is actually working fine but error caused because of time limit exceeded and 
 time complexity is O(log base 2 ,10n) that worst case scenario
*/


// optimal solution only achieve by bit manipulation technique
bool fun1(int n){
          return  n>0 && ((n & n-1) == 0);
}
int main(){
          int n;
          cin>>n;
          cout<<fun1(n);  
          return 0;    
}
/* this is the optimal way 
time complexity = O(1)
space complexity = O(1)
*/
