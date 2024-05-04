#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,k=0;
    int sum=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];}
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if ( i + j == n - 1){
                sum+=arr[i][j];
            }
            }
        }
        cout<<sum;

}   