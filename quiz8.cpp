#include <bits/stdc++.h>
using namespace std;


int nTH(int n ,int fst, int d){
    return fst + (n-1)*d;   
}

int AP(int fst , int scnd){
    int i;
    int d = scnd - fst ;
    for(int i=1;i<=10;i++){
        int a_n = fst + (i-1)*d;
        cout<<a_n<<",";
    }
    cout<<"\n";
    cin>>i;
    return nTH(i,fst,d);
}

int main(){
	int first , second ,n ;
	cin>> first >> second ;
	
	n = AP(first,second);
	cout<<"your nth term is: "<<n<<endl;
          return 0;
}