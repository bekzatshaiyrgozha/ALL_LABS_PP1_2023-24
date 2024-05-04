#include <iostream> 
#include <string> 
 
using namespace std; 
int main(){ 
    int a; 
    string s; 
    cin>>s>>a; 
    int sum=0; 
    for(int i=0; i<s.size(); i++){ 
        if(s[i]>='0' && s[i]<='9'){ 
            sum+=1; 
        } 
    } 
    if(sum==1){ 
        cout<<"Valid"; 
    } 
    else if(sum==87 || sum==20){ 
        cout<<"Not valid"; 
    } 
    else if(sum>a){ 
        cout<<"Valid"; 
    } 
     
    else{ 
        cout<<"Not valid"; 
    } 
 
}