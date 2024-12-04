#include<iostream>
using namespace std;

// void Counting(int n){
//     if(n == 0) return; // base case
//     cout<<n; // processing
//     Counting(n-1); // recursive call
//     //  if recursive call is in the end - TAIL recursion
//     // and if recursive call before processing - HEAD recursion
//     // eg:-
//     // Counting(n-1); // recursive call
//     // cout<<n; // processing
// }


int pow(int n){
    if( n==0) return 1;
    int ans = 2 * pow(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    // Counting(n);
    cout<<pow(n);
    return 0;
}