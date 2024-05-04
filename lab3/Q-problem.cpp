#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    if (x <= 1) {
        cout << x;
    } else {
        int i;
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                break;
            }
        }

        if (i * i > x) {
            cout << "Yes" ;
        } else {
            cout << "No";
        }
    }

   }