#include <iostream>
#include <vector>
using namespace std;

// using brute force frequency count method 
// time and space complexity is O(n) 
// not memory efficient 
int findDuplicate(const vector<int>& arr) {
    int n = arr.size();
    vector<int> freq(n, 0);  // frequency array of size n, initialized to 0

    for (int i = 0; i < n; ++i) {
        freq[arr[i]]++;

        if (freq[arr[i]] == 2) {
            return arr[i];  // duplicate found
        }
    }
    return -1;  // just in case no duplicate found (though by problem, one always exists)
}

// using xor operator logic by this we can save space and time 
// time O(n) for two for loops and space is constant O(1)
int findDuplicate(const vector<int> &arr){ // by reference
          int n = arr.size();
          int ans = 0;
          for(int i=0; i<n ;i++){
                    ans = ans ^ arr[i];
          }
          for(int i=1; i<n ;i++){
                    ans = ans ^ i;
          }
          return ans;
}

// using sumation or arithmetic logic 
// time and space efficient 
// but might integer overflow in case of large input 
int findDuplicate(const vector<int> &arr){
          int n = arr.size();
          int actual_sum =0;
          int expected_sum =((n-1)*n) / 2;//sum,of all natural num. form 1 to n-1
          for(int i=0; i<n ;i++){
                    actual_sum += arr[i];
          }
          return actual_sum - expected_sum;
}


int main() {
    vector<int> arr = {4, 2, 1, 3, 1};
    cout << "Duplicate element is: " << findDuplicate(arr) << endl;
    return 0;
}