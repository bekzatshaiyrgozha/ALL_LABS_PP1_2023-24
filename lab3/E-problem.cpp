#include <iostream>
#include <cmath>
using namespace std;
long long n,k,j;
int main(){
    j=-2147483648;
    n=0;
    cin>>k;
    long long a[k];
    for (int i=0;i<k;i++){
        cin>>a[i];
        n+=a[i];
    }
    cout<<n;
    return 0;
}