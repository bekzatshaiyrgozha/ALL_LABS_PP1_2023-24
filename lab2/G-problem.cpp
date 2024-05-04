#include <iostream> 
using namespace std; 
int main(){ 
    int n; 
    cin>>n;  
 
    int max; 
    cin>>max;  
 
    for (int i=1;i<n;i++){ 
        int num; 
        cin>>num;  
        if(num>max){ 
            max=num;  
        } 
    } 
 
    cout<<max; 
     
    return 0; 
}