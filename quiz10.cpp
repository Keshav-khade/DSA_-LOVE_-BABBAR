#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    int fst=0,sec=1;
    if(n==0){
        return fst;
    }else if(n==1){
        return sec;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
        int first = 0;
        int second = 1;
        cout<<first<<" "<<second<<" ";
        for(int i=1;i<=15;i++){
            int next = first + second ;
            cout<<next<<" ";
            first = second ;
            second = next ;
        }
        cout<<endl;
        int n; cin>>n;
        cout<<fib(n);
        return 0;
}