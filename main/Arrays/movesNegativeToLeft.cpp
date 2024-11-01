#include<iostream>
using namespace std;


void movesNegativeToLeft(int arr[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        if(arr[s]<0){
            s++;
        }else if(arr[e]>0){
            e--;
        }else{
            swap(arr[s],arr[e]);
        }
    }
}

int main(){

    int arr[]={2,4,-4,8,-2,-1};
    int n = 6;

    movesNegativeToLeft(arr,n);

    for(int num: arr){
        cout<<num<<" ";
    }



    return 0;
}