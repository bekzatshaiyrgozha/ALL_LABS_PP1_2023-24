#include <iostream>
#include <string>
using namespace std;

int pluse(int n){
    if(n<0){
        return n*(-1);


    }
    return n; 
}
        


int main() {
    int a;
    cin>>a;

    int y=pluse(a);
    cout<<y;

    

    return 0;
}