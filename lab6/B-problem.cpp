#include <iostream>

using namespace std;

int tuka(int x,int y){
    if(x>=y){
        return x-y;
    }
    else{
        return y-x;

    }
}



int main(){
    int k;
    cin>>k;
    int arr[k];
    int arr2[k];
    for(int i=0;i<k;i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<k;i++){
        cin>>arr2[i];}
    for(int i=0;i<k;i++){
        cout<<tuka(arr[i],arr2[i])<<" ";
    }
    

}