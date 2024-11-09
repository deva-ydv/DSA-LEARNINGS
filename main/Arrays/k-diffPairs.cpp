#include <iostream>
#include <algorithm> 
using namespace std;


// using 2 pointer

void kDiffPairs(int arr[], int k, int n) {
    // Sort the array (if not already sorted)
    sort(arr, arr + n);
    
    int count = 0;
    int i = 0;
    int j = 1;
    
    while (j < n) {
        int diff = arr[j] - arr[i];
        
        if (diff == k) {
            count++;
            cout << arr[i] << ", " << arr[j] << endl;  // Output the pair
            
            // Move both pointers to find the next unique pair
            i++;
            j++;
            
            // Skip duplicate values for both pointers
            while (i < n && arr[i] == arr[i - 1]) i++;
            while (j < n && arr[j] == arr[j - 1]) j++;
            
        } else if (diff > k) {
            i++;
            // Ensure i never overtakes j
            if (i == j) j++;
        } else {
            j++;
        }
    }
    
    cout << "Total distinct pairs: " << count << endl;
}

int main() {

    int arr[] = {3, 1, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    kDiffPairs(arr, k, n);
    
    return 0;
}
