#include <iostream>
#include <cstring> // for strlen
using namespace std;

void reverse(char arr[], int n) {
    int i = 0;
    int j = n - 1;
    while (i < j) {
        char temp = arr[i]; // i forget to use char here 
        arr[i] = arr[j];
        arr[j] = temp;
        // swap(arr[i], arr[j]);
        i++;
        j--;
    }
}



int main() {
    char arr[100]; 
    cin >> arr;    
    int n = strlen(arr); // Get actual length of the input
    reverse(arr, n);
    cout << arr;
    

    return 0;
}

