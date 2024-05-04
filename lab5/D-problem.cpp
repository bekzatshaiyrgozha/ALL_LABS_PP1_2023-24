#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    cin>>s;
    int length=s.length();
    bool polindrom = true;
    for(int i=0;i<length/2;i++){
        if(s[i]!=s[length-1-i]){
            polindrom=false;
            break;
        }
    }
    if(polindrom){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}