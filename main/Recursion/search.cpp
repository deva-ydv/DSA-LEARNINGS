#include <iostream>
using namespace std;

bool search(int arr[], int n, int i, int x) {
    if (i == n) return false; // Base case
    if (arr[i] == x) return true; // Element found
    return search(arr, n, i + 1, x); // Recursive call
}

int main() {
    int arr[] = {3, 4, 5, 6, 9};
    int n = 5; 
    int i = 0; 
    int x = 1; 
    cout << (search(arr, n, i, x) ? "Found" : "Not Found") << endl;
    return 0;
}
