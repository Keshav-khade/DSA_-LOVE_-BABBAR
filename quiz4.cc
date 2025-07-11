/* tribonacci sequence generation and find nth tribonacci value means 
given a number to you and you have to find the nth position tribonacci number
by using t(n)=t(n-1)+t(n-2)+t(n-3); but this calculate recursively and take lot of time 
leetcode thrown time limit exceeded so you have to use swaping method 
*/
#include <iostream>
using namespace std;
int tri(int n){
          if(n==0) return 0;
          if(n==1 || n==2) return 1;
          int t0=0,t3;
          int t1=1;
          int t2=1;
          for(int i=3;i<=n;i++){
                    t3=t0+t1+t2;
                    t0=t1;
                    t1=t2;
                    t2=t3;
          } 
          return t2;
}
int main(){
          int n;
          cin>>n;
          cout<<tri(n);
          return 0;
}
//time complexity = O(1)
// space complexity = O(1)
