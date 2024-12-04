#include<iostream>
using namespace std;
/*// unbounded array/infinite array
 in an infinite array we don't know the end/high element of the array
 that's why we use EXPOTENTIAL SEARCH helps us to find the end part of the 
 array of we can say we get the limited size of array where we use binary search
*/

int bs(int arr[], int s, int e, int x){
    while(s<=e){
        int mid = s +(e-s)/2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) s = mid +1;
        else e = mid - 1;
    }
}

// method 1;

// int expSearch(int arr[], int n, int x){
//     if(arr[0] == x) return 0;
//     int i =1;
//     while(i<n && arr[i] <= x){
//         i = i*2;
//     }
//     return bs(arr,i/2,min(i,n-1),x);
// }

// method 2 

int expSearch1(int arr[], int n, int x){
    int i = 0;
    int j = 1;
    while(arr[j] < x){
        i = j;
        j = j*2;
    }
    return bs(arr,i,j,x);

}

int main(){

    int arr[] = {2,3,4,5,6,7,12,13,14,15,20};
    int n = sizeof(arr)/sizeof(int);
    int x = 7;
    int ans = expSearch1(arr,n,x);
    cout<<ans;

    return 0;
}