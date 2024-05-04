#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++) {
            rowSum += arr[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << rowSum << endl;
    }

    for (int j = 0; j < m; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += arr[i][j];
        }
        cout << "The sum of column number " << j + 1 << " is " << colSum << endl;
    }

    return 0;
}