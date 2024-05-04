#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long n,m;
    cin >> n >> m;
    long arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            cout << i;
        }else if(m>arr[i] && m<arr[i+1]){
            cout << i+1;
        }else if(arr[i]<m && i==n-1) {
            cout << i+1;        
        }
    }
    return 0;
}