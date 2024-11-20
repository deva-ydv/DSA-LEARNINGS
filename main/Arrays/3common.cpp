#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> commonElem(int a[], int b[], int c[], int n1, int n2, int n3) {
    int i = 0, j = 0, k = 0;
    set<int> st;
    while (i < n1 && j < n2 && k < n3) {
        if (a[i] == b[j] && b[j] == c[k]) {
            st.insert(a[i]);
            i++;
            j++;
            k++;
        } else if (a[i] < b[j]) {
            i++;
        } else if (b[j] < c[k]) {
            j++;
        } else {
            k++;
        }
    }

    // Convert the set to a vector
    vector<int> ans(st.begin(), st.end());
    return ans;
}

int main() {
    int a[] = {2, 3, 4, 5};
    int b[] = {1, 2, 3, 4};
    int c[] = {2, 3, 8, 9};
    int n1 = 4, n2 = 4, n3 = 4; 

    vector<int> result = commonElem(a, b, c, n1, n2, n3);

    
    if (!result.empty()) {
        cout << "Common elements: ";
        for (int num : result) {
            cout << num << " ";
        }
    } else {
        cout << "No common elements";
    }

    return 0;
}
