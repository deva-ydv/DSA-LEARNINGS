#include <iostream>
#include <vector>
using namespace std;

/*
vector:
-- Dynamic array that can grow or shrink in size in runtime.
-- Allow fast random access to elements.
-- Insertion and removal of elements at the end is efficient.
-- Suitable for most scenarios when elements need to be stored in a linear sequence.
*/

int main()
{
  /*

    To use this -> #include<vector>
    creation of vector
    vector<int> arr[];
    vector<int> marks(10); // total 10 blocks
    vector<int> marks(10,2); total 10 blocks with each blocks has 2 in it.
    // etc

    */

    /*
       iterator -> standard way to traverse over containers
       .begin() & .end()
       begin() points 1st index of vector
       end() points just after last index of vector, note-> not last index

       eg:
        vector<int> marks(5,1); // 5 blocks which has 1 in each
        cout<< *(marks.begin())<<endl; // gives the 1st value of index 0;

    */

    /*
        vector<int> marks;

        marks.push_back(10); // this push_back is used to insert the value's , adds a element to the end of the vector
        marks.push_back(20);
        marks.push_back(30);
        marks.push_back(40);

        2-> .size() 
        cout<< "Size"<<marks.size()<<endl; // this size() get the size of vector elements on it

        3->
        marks.pop_back() // last value will get removed i:e 40.

        4-> //front() & back()
        cout<<marks.front(); gives front value
        cout<<marks.back(); gives last value

        5-> empty();
        if(marks.empty() == true){
        cout<<"vector is empty";
        }else{
        cout<<"not empty";
        }

        6-> 
        cout<<marks[0]; // gives the 1st value 
        cout<<marks.at(0); // gives the 1st value , both are same
        marks[0] = 50; // assing a new value to it, Note-> Only if we already assing the blocks like if vector is empty then we can't use this method

        7 -> capacity();
        cout<<marks.capacity(); give the total block of vector even if we didn't assing the element on it.

        8 -> reserve();
        marks.reserve(10); reserve the capacity of vector

        9 -> max_size();
        cout<<marks.max_size(); give the max size of vector, system dependend thing

        10-> clear(); // clears the vector

        11-> insert();
        marks.insert(marks.begin(), 50); // this will insert the 50 at 1st place

        12-> erase();
        marks.erase(marks.begin(),marks.end()); // erase the all elements

        13-> swap();
        vector<int> first;
        vector<int> second;
        first.swap(second);
        // we can swap the elements of each vector's

        // 14-> create and iterator, traversing the vector using iterator 
        vector<int>marks;
        marks.push_back(10); 
        marks.push_back(20);
        marks.push_back(30);
        marks.push_back(40);

        vector<int>::iterator it = marks.begin(); // syntax

        while(it != marks.end()){
            cout<< *it;
            it++;
        }
     */

        


   

    return 0;
}
