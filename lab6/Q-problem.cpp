#include <iostream>
#include <string>
using namespace std;

double p(double a,double b){
    double f=(b*100)/a;
    return f;
}
        


int main() {
    double a,b;
    cin>>a >> b;
    double k= p(a,b);
    cout<<k;

    

    return 0;
}