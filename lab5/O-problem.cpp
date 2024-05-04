#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin>>s;
    char  min=s[0];
    for(int i=0;i<s.length();i++){
        if(min<s[i]){
            min=s[i];
        }
    }
    cout<<min;

}