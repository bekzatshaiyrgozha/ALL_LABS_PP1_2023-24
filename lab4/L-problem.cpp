#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m, index_i=0,index_j=0;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int sum=0;
    cout<<"coordinates of min elements: "<<endl;
    for(int j =0; j<m;j++){
        int min=a[0][j];
        for(int i =0; i<n;i++){
            if(a[i][j]<min){
                min=a[i][j];
                index_i=i;
                index_j=j;   
            }
        
        }
        cout<<index_i+1<<";"<<index_j+1<<endl;
        sum+=min;
    }
    cout<<"\nTheir sum: " <<endl<<sum;
    return 0;
 }