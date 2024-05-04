#include <algorithm> 
#include <iostream> 
#include <cctype> 
using namespace std; 
void func(int a){  
    int arr[a]; 
    int brr[a]; 
    int birdei=0; 
    for(int i=0;i<a;i++){ 
        cin>>arr[i]; 
    } 
      for(int j=0;j<a;j++){ 
        cin>>brr[j]; 
    } 
    int i=0; 
    int j=0; 
    sort(arr,arr+a); 
    sort(brr,brr+a); 
 
    while(i<a&&j<a){ 
        if(arr[i]==brr[j]){ 
            birdei++; 
            i++; 
            j++; 
 
        } 
        else if(arr[i]<brr[j]){ 
            i++; 
        } 
        else{ 
            j++; 
        } 
    } 
    cout<<birdei; 
 
} 
 
 
int main() { 
 
    int a; 
    cin>>a; 
    func(a); 
}