#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, m, sum = 0;
    cin >> n >> m;
    int min_i = 0;
    int min = INT_MAX;

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            sum += a;
        }
        if (sum < min) {
            min = sum;
            min_i = i + 1;
        }
        sum = 0;
    }

    cout << min_i;
    return 0;
}