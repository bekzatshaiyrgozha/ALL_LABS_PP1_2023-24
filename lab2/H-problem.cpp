#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int e = 0; 
    int o = 0; 

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            e++;
        } else {
            o++;
        }
    }

    cout << e <<" "<< o <<endl;

    return 0;
}