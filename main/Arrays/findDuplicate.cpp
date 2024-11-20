#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int findDuplicate(vector<int> arr, int n){
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        if(arr[i] == arr[i+1]) return arr[i];
    }
return -1;
}


int main(){
    
    vector<int> arr = {1,3,4,4,2};
    int n = 5;
        
    cout<<findDuplicate(arr,n);


    return 0;
}