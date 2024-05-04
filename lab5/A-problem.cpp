#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    cin>>s;
    int small=0;
    int largh=0;
    for(int i=0;i<=s.size()-1;i++){
        if(s[i]>='a' and s[i]<='z'){
            small++;
        }
        if (s[i]>='A' and s[i]<='Z'){
            largh++;
        }
    }
    cout<<small<<" "<<largh<<endl;
}