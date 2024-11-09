#include<iostream>
using namespace std;

void replace(char orignal, char newone, char arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i] == orignal) arr[i] = newone;
    }
}

void upperToLower(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        char ch = arr[i];
        if (ch >= 'A' && ch <= 'Z') {  // Check if it's an uppercase letter
            ch = ch + ('a' - 'A');     // Convert to lowercase
        }
        arr[i] = ch;
    }
}



int main(){
    /*
   // for replace function
    char arr[10];
    int n = 10;
    cin>>arr;
    replace('@',' ',arr,n);
    cout<<arr;
    */



   /*
   for upperToLower
    char arr[20];
    cin >> arr;

    int n = 0;
    while (arr[n] != '\0') {  // Calculate the length of the input string
        n++;
    }
    upperToLower(arr, n);
    cout << "Converted string: " << arr << endl;
    */
    return 0;
}
