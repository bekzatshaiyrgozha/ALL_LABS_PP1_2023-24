#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    int arr[n + 1]; 

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    if (l >= 1 && r <= n && l <= r) {
        reverse(arr + l, arr + r + 1);

        for (int i = 1; i <= n; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}