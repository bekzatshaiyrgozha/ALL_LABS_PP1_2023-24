#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int elem;
    cin >> elem;
    int array[elem];

    for (int i = 0; i < elem; i++) {
        cin >> array[i];
    }

    sort(array, array + elem); 
    for (int i = elem - 1; i >= 0; i--) {
        cout << array[i] << ' ';
    }

    return 0;
}