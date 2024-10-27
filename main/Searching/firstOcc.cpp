#include <iostream>
using namespace std;

// left and right firstOcc

void firstOcc(int arr[], int n, int target, int &ansIndex) {
    int s = 0;
    int e = n - 1;  
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target) {
            ansIndex = mid;
            e = mid - 1; // for left occ 
            // s = mid +1;   // for right occ
        } else if (arr[mid] > target) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = 7;
    int target = 2;
    int ansIndex = -1;

    firstOcc(arr, n, target, ansIndex);
    cout << ansIndex;

    return 0;
}
