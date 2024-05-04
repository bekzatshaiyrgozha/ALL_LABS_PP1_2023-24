#include <iostream>
#include <cmath>
using namespace std ;
int main(){
  int a,b;
  cin>>a;
  b=sqrt(a);
  if(a-(b*b)==0){
    cout<<"Yes";
  }
  else {
    cout<<"No";
  }

}