#include <iostream>
#include <vector>
using namespace std;



// int findPeakIndex(const vector<int>& arr) {
//     int s = 0;
//     int e = arr.size()-1;
//     while (s < e) { // Use s<e to avoid infinite loop
//         int mid = s + (e - s) / 2;
//         if (arr[mid] < arr[mid + 1]) {
//             s = mid + 1;
//         } else {
//             e = mid;
//         }
//     }
//     return s; // single element  s/e/mid
// }

int storeNcompute(const vector<int>& arr, int &ansIndex){
    int s = 0;
    int e = arr.size()-1;
    while (s <= e) { 
        int mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        } else {
           ansIndex = mid;
           e = mid -1;
        }
    }
    return ansIndex; 

}

int main() {
    vector<int> arr = {2, 3, 9, 7, 4, 1};
    // int peakIndex = findPeakIndex(arr);
    // cout << "Peak index: " << peakIndex << endl;

    // for storeNcompute method
    int ansIndex = -1;
    int peakIndex = storeNcompute(arr,ansIndex);
    cout<<ansIndex;
    return 0;
}



