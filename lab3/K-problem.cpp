#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long n;
    cin >> n;
    long arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i-1]){
            continue;
        }
        cout << arr[i] << " ";
    }
    return 0;
}