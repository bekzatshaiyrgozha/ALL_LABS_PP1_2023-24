#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[0][i]=i;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][0]=i;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            arr[i][j]=arr[i][0]*arr[j][0];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}