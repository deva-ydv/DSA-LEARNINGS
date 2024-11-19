#include <iostream>
#include <unordered_map>
using namespace std;

int solve(int arr[], int n) {
    unordered_map<int, int> freq; 

    // Count frequencies of elements
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find the first element with frequency > 1
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 1) {
            return arr[i]; 
        }
    }

    return -1; 
}

int main() {
    int arr[] = {2, 3, 4, 4, 4, 4};
    int n = 6; 
    cout << solve(arr, n) << endl;

    return 0;
}
