#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) { // and for higher to lower <
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {-2, 3, 4, 1, 9};
    int n = 5;
    bubbleSort(arr, n);
    for(int num : arr) {
        cout << num << " ";
    }
    return 0;
}
