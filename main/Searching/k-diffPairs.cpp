#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int findPairs(vector<int> arr, int k) {
    int n = arr.size();
    set<pair<int, int>> temp;
    sort(arr.begin(), arr.end());
    int i = 0, j = 1;

    while (j < n) {
        int diff = arr[j] - arr[i]; 
        if (diff == k) {
            temp.insert({arr[i], arr[j]});
            i++;
            j++;
        } else if (diff < k) {
            j++; 
        } else {
            i++; 
        }

        // Ensure i and j are not pointing to the same element
        if (i == j) {
            j++;
        }
    }
    return temp.size();
}

int main() {
    vector<int> arr = {1,3,1,4,5};
    int k = 1;
    cout << findPairs(arr, k);
    return 0;
    // using two pointer and on leetcode using binarySearch
}
