#include<iostream>
#include <algorithm>
using namespace std;

int findMissing(int arr[], int n){
    sort(arr, arr + n);
    for(int i = 0; i<n; i++){
        if(i == arr[i]) continue; // here we are comparing the index with arr's elements if arr's element is not equal to index, that means index is the missing term --> return i;
        else return i;
    }
    return n; // edge case [0,1] and n is 2, means the arr look like this {0,1,2} is this case return we return the n becoz n itself is missing 
}


int main(){
    int arr[] = {0,1};
    int n = 2;

    cout<<findMissing(arr,n);

    return 0;
}



// we can also do this using xor^ 