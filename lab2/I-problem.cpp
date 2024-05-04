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

        if (num % 10== 7) {
            e++;
        } 
    }

    cout << e <<endl;

    return 0;
}