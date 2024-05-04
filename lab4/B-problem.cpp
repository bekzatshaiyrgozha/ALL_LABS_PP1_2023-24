#include <iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int arr[n][n];
    for (int i=0;i<n;i++){
        for (int j=0 ; j<n;j++){
            cin>>arr[i][j];

        }
    }
    int max=arr[0][0];
    for (int i=0;i<n;i++){
        for (int j=0 ; j<n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }


}
int max2=arr[0][0];
for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        
        if(max2<=arr[i][j] and arr[i][j]<max){
            max2=arr[i][j];
            
        }
        else if(max2==arr[i][j]){
            max2=0;
        }
        
    }
}
cout<<max2;
}