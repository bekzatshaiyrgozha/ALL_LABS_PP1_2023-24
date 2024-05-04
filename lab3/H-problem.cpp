#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long n,l,r;
    cin >> n >> l >> r ;
    long arr[n];
    long sum = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(i+1>=l && i+1<=r){
            sum+=arr[i];
        }
    }
    cout << sum;
    return 0;
}