#include<iostream>
using namespace std;

int main(){

    int a = 4;
    int* ptr = &a;
    cout<<sizeof(ptr);// 4

    return 0;
}