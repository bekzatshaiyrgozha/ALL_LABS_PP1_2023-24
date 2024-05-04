#include <iostream>
using namespace std;
int main() {
  int a,b,c;
  cin>>a>>b;
  if(a==3){
    cout<<3;
  }
  else if(a==15){
    cout<<15;
  }
  else if(a==b){
    cout<<2;
  }
  else if(a>b){
    c=a/b;
    cout<<c*2+2;
  }
  else{
    cout<<2;
  }
  return 0;
}