#include <iostream>
using namespace std;

int tuka(int a,int b,int c,int d){
    int arr[4]={a,b,c,d};
    int max=arr[0];
    for(int i=1;i<4;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}


int main(){
    int k,x,y,z;
    cin>>k>>x>>y>>z;
    cout<<tuka(k,x,y,z);

    
    
    }