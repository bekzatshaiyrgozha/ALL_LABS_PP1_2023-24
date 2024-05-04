#include <iostream>
using namespace std;




int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int k;
    cin>>k;
    bool bar = true;
    for(int i=0;i<n;i++){
        if(arr[i]==k ){
            bar = false ;
        }
    }
    if(bar==false){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
    }