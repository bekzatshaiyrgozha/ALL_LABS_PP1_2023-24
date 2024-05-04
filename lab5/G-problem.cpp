#include <iostream>
#include <string>

using namespace std;
int main(){
    string s, s1, s2;
    cin >> s >> s1;
    bool t=true;
    for(int i = 0; i<s.length(); i++){
        if(s[i]!=s1[i]){
            t=false;
            break;
        }
    }
    if(t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}