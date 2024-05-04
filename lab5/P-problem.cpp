#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    char d='z';
    char f='a';
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]==d){
            s[i]=f-1;
        }
        s[i]++;
    }
    cout<<s;

}