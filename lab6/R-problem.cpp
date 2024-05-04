#include <iostream>
#include <string>
using namespace std;

char dau(char s){
    if('a'<= s and s <= 'z'){
        return (char) int(s)-32;

    }
    return s;
        
}

int main() {
    char s;
    cin>>s;
    cout<<dau(s);
    




    return 0;
}