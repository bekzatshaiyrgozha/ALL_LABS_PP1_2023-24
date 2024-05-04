#include <iostream>
#include <string>
using namespace std;

string tuka(string n) {
    for(int i=0;i<n.length();i++){
        if(i%2==0 and n[i]>='a' and n[i]<='z'){
            n[i]=n[i]-32;

        }

    }
    return n;    
}

int main() {
    string s;
    int k;
    cin >>s;
    cout << tuka(s);
}