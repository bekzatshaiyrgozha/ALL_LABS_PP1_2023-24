#include <iostream>
#include <string>
using namespace std;

int tuka(int v){
    int sum=0;
    while(v>0){
        sum+=v%10;
        v=v/10;

    }
    return sum;
}

int main() {
    int k;
    cin >>k;
    cout << tuka(k);
}