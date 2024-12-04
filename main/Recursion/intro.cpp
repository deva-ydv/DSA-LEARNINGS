#include<iostream>
using namespace std;
/*
base case - mandatory
recursive call - mandatory
processing - optional
*/

int getFactorial(int n){

    if(n == 1){
        return 1; //base case
    }
    // recursive call this call will continue until the base case
    //  and each call will return their value 
    int finalAns = n * getFactorial(n-1); 
    return finalAns;
}

int main(){

    int n;
    cin>>n;

    int ans = getFactorial(n);
    cout<<ans;

    return 0;
}