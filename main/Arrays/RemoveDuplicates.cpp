#include<iostream>
using namespace std;

// remove duplicates from sorted array
int removeDup(int arr[], int n) {
    int i = 1;
    int j = 0;
    while (i < n) {
        if (arr[i] == arr[j]) i++;
        
        else{
            j++;
            arr[j] = arr[i];
            i++;
        }
    }
    return j + 1; // Returns the new length 
}

int main() {
    int arr[] = {0, 0, 1, 1, 1, 2, 3, 3, 4};
    int n = 9;

    int newLength = removeDup(arr, n); 

    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
