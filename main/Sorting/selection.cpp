#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&v){
    int n = v.size();

    for(int i=0; i<n-1; i++){
        int minIndex = i; // taking ith element is smallest
        for(int j=i+1; j<n; j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[i],v[minIndex]);
    }

}


int main(){

    vector<int> v = {44,33,22,11};
    selectionSort(v);
    for(int num: v){
        cout<<num<<" ";
    }




    return 0;
}