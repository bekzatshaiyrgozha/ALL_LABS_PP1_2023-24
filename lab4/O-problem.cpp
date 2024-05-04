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
    int max=arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j and max<arr[i][j]){
                max=arr[i][j];
                k=i;

            }
            }
            
        }
        cout<<"Maximum element is: "<<max<<" with coordinates: "<<k+1<<";"<<k+1;
            }