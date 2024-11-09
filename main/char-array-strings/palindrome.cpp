#include <iostream>
#include <cstring> // for strlen
using namespace std;

bool palindrome(char arr[], int n) {
    int i = 0;
    int j = n - 1;

    while (i < j) {
        if (arr[i] != arr[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true; 
}

int main() {
    char arr[100];
    cin >> arr;
    int n = strlen(arr); // Get actual length of the input

    if (palindrome(arr, n)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
