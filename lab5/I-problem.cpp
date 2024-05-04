#include <iostream>
#include <algorithm>
using namespace std;

string tuka(string l , string v){
    sort(l.begin(),l.end());
    sort(v.begin(),v.end());
    if(l==v){
        return "YES";

    }
    else{
        return "NO";
    }
    
}


int main(){
    string s,k;
    cin>>s>>k;
    cout<<tuka(s,k);
    
    
    
    }