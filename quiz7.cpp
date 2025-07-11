#include <iostream>
using namespace std;

int main() {
    int n = 5; // total rows
    int i = 1;

    while (i <= n) {
        int num = 1;

        // Left side numbers (1 to n - i + 1)
        int j = 1;
        while (j <= n - i + 1) {
            cout << num;
            num++;
            j++;
        }

        // Middle spaces (2 * (i - 1))
        int k = 1;
        while (k <= 2 * (i - 1)) {
            cout <<"*";
            k++;
        }

        // Right side numbers (n - i + 1 to 1)
        int l = n - i + 1;
        while (l >= 1) {
            cout << l;
            l--;
        }

        cout << endl;
        i++;
    }

    return 0;
}
