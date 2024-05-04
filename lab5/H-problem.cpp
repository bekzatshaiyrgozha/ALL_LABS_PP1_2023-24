#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k=0,t=0,l=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            k++;
        }
        else if(s[i]=='2'){
            t++;
        }
        else if(s[i]=='3'){
            l++;
        }
    }
    if(k==t and k==l and t==l or k==t and l==0 or k==l and t==0 or t==l and k==0){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}