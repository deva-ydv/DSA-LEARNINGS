#include<iostream>
#include<list>
using namespace std;

// Doubly-linked list.
// Allow fast insertions and removals anywhere in the list
// No random access like vectors/arrays
// 3 things are there prev,data,next

int main(){

    list<int>myList; // creation of list

    // insertion 
    myList.push_back(10);
    // 10
    myList.push_back(20);
    // 10->20
    myList.push_back(30);
    // 10->20->30
    myList.push_back(40);
    // 10->20->30->40
    myList.push_front(100);
    // 100->10->20->30->40
    myList.pop_back();
    // 100->10->20->30
    myList.pop_front();
    // 10->20->30

    cout<<myList.size()<<endl; // 3
    myList.clear();
    cout<<myList.size()<<endl; // 0 



    return 0;
}