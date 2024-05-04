#include <iostream>
#include <algorithm>
using namespace std;

string tuka(string k){
    bool polindrom=true;
    k+=k[0];
    int length=k.length();
    for(int i=0;i<length/2;i++){
        if(k[i]!=k[length-1-i]){
            polindrom=false;
            break;
    
        }
}
if(polindrom==true){
    return "YES";
}
else{
    return "NO";
}
}


int main(){
    string s;
    cin>>s;
    cout<<tuka(s);
    
    
    
    }