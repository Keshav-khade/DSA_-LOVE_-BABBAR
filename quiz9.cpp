#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6;
    
    int totalSetBits = __builtin_popcount(a) + __builtin_popcount(b);

    cout << "Total set bits in " << a << " and " << b << " are: " << totalSetBits << endl;

    return 0;
}
