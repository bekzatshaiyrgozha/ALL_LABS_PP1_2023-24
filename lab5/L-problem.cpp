#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k = 0;
    
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < i; j++) {
            if (s[j] > s[i]) {
                k++;
                break;
            }
        }
    }

    if (k == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}