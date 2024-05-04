#include <iostream>
#include <string>
using namespace std;

string tuka(int a) {
    bool even = true;
    while (a > 0) {
        if (a % 10 % 2 != 0){
            even=false;

        }
        a = a / 10;
    }
    if(even == true) {
        return "Valid";
    }else{
        return "Not valid";
    }
}
        


int main() {
    int k;
    cin>>k;
    cout<<tuka(k)<<endl;
    

    return 0;
}