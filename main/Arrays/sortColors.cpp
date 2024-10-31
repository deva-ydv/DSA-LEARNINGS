#include <iostream>
using namespace std;

void sortValues(int arr[], int n) {
    int zeros = 0, ones = 0, twos = 0;

    // Count the occurrences of 0, 1, and 2
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeros++;
        } else if (arr[i] == 1) {
            ones++;
        } else {
            twos++;
        }
    }

    // Arrange in sorted way
    int i = 0;
    while (zeros--) {
        arr[i] = 0;
        i++;
    }
    while (ones--) {
        arr[i] = 1;
        i++;
    }
    while (twos--) {
        arr[i] = 2;
        i++;
    }

    // Print the sorted array
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {0, 1, 0, 1, 2, 2, 2};
    int n = 7;

    sortValues(arr, n);

    return 0;
}
