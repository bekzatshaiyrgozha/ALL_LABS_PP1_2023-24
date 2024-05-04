#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char k = 0;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        switch (tolower(s[i])) {
            case 'a':
            case 'e':
            case 'o':
            case 'i':
            case 'u':
                k++;
                break;
            default:
                break;
        }
    }

    cout <<static_cast<int>(k) << endl;
}