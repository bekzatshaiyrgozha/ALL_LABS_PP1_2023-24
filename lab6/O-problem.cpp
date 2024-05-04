#include <iostream>
#include <string>
using namespace std;

string tuka(int j){
    bool def=true;
    int div;
    int sum=0;
    while(j>0){
        if(def){
            div=j%10;
            sum+=j%10;
            j/=10;
            def=false;
        }
        else{
            sum+=j%10;
            j/=10;
        }
    }
    if(sum%div==0){
        return "Yes";
    }
    else{
        return "No";
    }
}
int main() {
    int k;
    cin>>k;
    cout<<tuka(k);
    return 0;
}