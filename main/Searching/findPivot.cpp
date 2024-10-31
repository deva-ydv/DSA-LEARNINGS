#include<iostream>
using namespace std;

int findPivotIndex(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;

        // Check if mid is the pivot
        if (mid < e && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        if (mid > s && arr[mid] < arr[mid - 1]) {
            return mid - 1;
        }

        // Decide the side to search
        if (arr[s] >= arr[mid]) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return -1;  
}

int main() {
    int arr[] = {7, 8, 9, 2, 3, 4, 5};
    int n = 7;
    int pivotIndex = findPivotIndex(arr, n);

    if (pivotIndex != -1) {
        cout << "Pivot index: " << pivotIndex << endl;
    } else {
        cout << "No pivot found" << endl;
    }

    return 0;
}
