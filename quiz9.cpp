#include <iostream>
using namespace std;

// int main() {
//     int a = 5, b = 6;
    
//     int totalSetBits = __builtin_popcount(a) + __builtin_popcount(b);

//     cout << "Total set bits in " << a << " and " << b << " are: " << totalSetBits << endl;

//     return 0;
// }

int main(){
	int a,b;
	cin>>a>>b;
	int count=0;
	while(a>0 || b>0){
	    int bit1 = a & 1;
	    int bit2 = b & 1;
        count = count + (bit1+bit2) ;     
        a = a >> 1;
        b = b >> 1;
	}
	cout<<"total number of set bits are: "<<count<<endl;
    return 0;
}
