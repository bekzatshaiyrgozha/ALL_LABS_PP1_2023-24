#include <iostream>
#include <string>
using namespace std;
int main() {

    

    string s,k;
    int a;
    int sum=0;
    cin>>s>>k>>a;
    for(int i=0;i<s.length();i++){
        if(s[i]==k[0]){
            sum++;
        }
    }
    if(sum==a){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}