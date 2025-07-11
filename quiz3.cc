/*Given an integer n, return true if it is a power of three. Otherwise, return false.
An integer n is a power of three, if there exists an integer x such that n == 3x.
*/
#include<iostream>
using namespace std;
bool fun1(int n){
          if (n < 1) return false;
          while (n % 3 == 0) {
                    n /= 3;
          } 
          return n == 1;
}
int main(){
          int n;
          cin>>n;
          cout<<fun1(n);
          return 0;
}
// time complexity = O(log3(n))
// space complexity = 0(1) constant 