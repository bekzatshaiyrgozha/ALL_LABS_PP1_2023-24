#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double gip(double x, double y){
    double k=sqrt(x*x+y*y);
    return k;
}
        


int main() {
    double a,b;
    cin>> a >> b;
    cout<<setprecision(4);
    cout<<gip(a,b);
    

    return 0;
}