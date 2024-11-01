#include <iostream>
using namespace std;

int main() {
    int s = 0;
    int x = 100;
    int e = x;
    int ans = -1;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        int product = mid * mid;

        if (product == x) {
            ans = mid;
            break;
        }
        if (product < x) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    cout << ans;
    return 0;
}
