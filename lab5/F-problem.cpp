#include <iostream>
#include <string>

using namespace std;
int main(){
    string s, s2;
    int a, b;
    cin >> s >> a >> b;
    for(int i=0; i<s.length();i++){
        if(i>=a && i<=b){
            s2+=s[i];
        }
    }
    cout<<s2;
}