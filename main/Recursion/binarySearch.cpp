#include<iostream>
using namespace std;

int binaryRecursive(int arr[], int n , int x,int s, int e){
   
    if(s>e) return -1;
    int mid = (s+e)/2;
    if(arr[mid]== x) return mid;
    if(arr[mid]< x) {
        return binaryRecursive(arr,n,x,mid+1,e);
    }else{
        return binaryRecursive(arr,n,x,s,mid-1);
    }
    return -1;
}

int main(){

    int arr[] = {2,3,4,5,6,7};
    int n = 6;
    int x = 5;
    int s = 0;
    int e = n-1;
    cout<<binaryRecursive(arr,n,x,s,e);



    return 0;
}