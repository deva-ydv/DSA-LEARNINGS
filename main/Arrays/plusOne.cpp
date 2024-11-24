#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> digits, int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits; 
        } else {
            digits[i] = 0; // Set current digit to 0 and continue
        }
    }
    // If we are here, it means we have a carry; add 1 at the beginning
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    vector<int> digits = {9,9};
    // vector<int> digits = {1,2,4};
    int n = digits.size();
    vector<int> result = plusOne(digits, n); 

    for (int digit : result) {
        cout << digit;
    }

    return 0;
}
