#include<iostream>
using namespace std;


int nearlySorted(int arr[], int n, int target){
    int s = 0;
    int e = n-1;

    while(s<=e){
        int mid = s +(e-s)/2;

        if(arr[mid] == target){
            return mid;
        }if(arr[mid + 1] == target){
            return mid + 1;

        }if(arr[mid - 1] == target){
            return mid -1;
        }
        if(arr[mid] < target){
            s = mid + 2;

        }else{
            e =  mid - 2;
        }
    }
return -1;
}



int main(){

    int arr[] = {10,3,40,20,50,80,70};
    int n= 7;
    int target = 70;
    int ans = nearlySorted(arr,n,target);
    if(ans != -1){
        cout<<ans;
    }


    return 0;
}