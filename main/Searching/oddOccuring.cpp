#include<iostream>
using namespace std;

int oddOccuring(int arr[], int n, int ans){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[mid] == arr[mid +1] || arr[mid-1]){
            s = mid +1;
        }else{
            ans =  arr[mid];
        }
    }
    return ans;
}

int main(){

    int arr[] = {1,1,2,2,3,3,4,5,5,3,3};
    int n = 11;
    
   int ans =  oddOccuring(arr,n,ans);
    cout<<ans;



    return 0;
}