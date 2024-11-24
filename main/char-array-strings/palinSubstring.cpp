#include<iostream>
#include<string>
using namespace std;

int findCount(string s, int i, int j){
    int count = 0;
    while(i>=0 && j<s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
    }
    return count;
}

int palinSubstrings(string s){
    int totalCount = 0;
    for(int center = 0; center<s.length(); center++){
        // odd
        int i = center;
        int j = center;
        int oddSubstring = findCount(s,i,j);
        // even
        i = center;
        j = center + 1;
        int evenSubstring = findCount(s,i,j);

        totalCount = totalCount + oddSubstring + evenSubstring;
    }
    return totalCount;
    
}

int main(){
    string s = "aaa";
    cout<<palinSubstrings(s);
    return 0;
}