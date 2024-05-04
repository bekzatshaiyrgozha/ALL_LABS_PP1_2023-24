#include <iostream>
#include <string>
using namespace std;

string tuka(string n,int z) {
    int k=0;
    for(int i=0;i<n.length();i++){
        if(n[i]>='0' and n[i]<='9'){
            k++;
        }
    }
    if(k>=z){
        return "YES";
    }
    else{
        return "NO";

    }
    
}

int main() {
    string s;
    int k;
    cin >> s>>k;
    cout << tuka(s,k);
}