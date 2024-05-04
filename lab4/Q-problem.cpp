#include <iostream>
using namespace std;

int main() {
    int n;
    int a=0;
    cin >> n;
    int arr[n][n*2-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2-1;j++){
            if(i==0 && j==n-1){
                cout<<"*";
            }
            else if(j>=n-1-a && j<n+a){
                cout<<"*";
            }
            else {
                cout<<".";
            }
        }
        cout<<endl;
        a++;
        
    }
}