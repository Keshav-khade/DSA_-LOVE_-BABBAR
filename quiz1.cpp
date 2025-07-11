#include <iostream>
using namespace std;

int main() {
    int amount;
    cout<<"enter the total amount:";
    cin>>amount;
    int n100 = 0, n50 = 0, n20 = 0, n1 = 0;
    int choice = 1;

    while (amount > 0) {
        switch (choice) {
            case 1:
                n100 = amount / 100;
                amount = amount % 100;
                choice++;
                break;

            case 2:
                n50 = amount / 50;
                amount = amount % 50;
                choice++;
                break;

            case 3:
                n20 = amount / 20;
                amount = amount % 20;
                choice++;
                break;

            case 4:
                n1 = amount;
                amount = 0;
                choice++;
                break;

            default:
                amount = 0;
        }
    }

    cout << "100 rupee notes: " << n100 << endl;
    cout << "50 rupee notes : " << n50 << endl;
    cout << "20 rupee notes : " << n20 << endl;
    cout << "1 rupee coins  : " << n1 << endl;

    return 0;
}


