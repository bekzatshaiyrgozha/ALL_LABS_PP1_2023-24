#include <iostream> 
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
int main() { 
    int a; 
    cin >> a; 
    vector<int> arr1(a); 
 
    for (int z = 0; z < a; z++) { 
        cin >> arr1[z]; 
    } 
 
    int b; 
    cin >> b; 
    vector<int> arr2(b); 
 
    for (int x = 0; x < b; x++) { 
        cin >> arr2[x]; 
    } 
 
    int n = a + b; 
    vector<int> arr(n); 
 
    for (int v = 0; v < a; v++) { 
        arr[v] = arr1[v]; 
    } 
 
    for (int v = 0; v < b; v++) { 
        arr[v + a] = arr2[v]; 
    } 
 
    sort(arr.begin(), arr.end()); 
 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
 
    return 0; 
}