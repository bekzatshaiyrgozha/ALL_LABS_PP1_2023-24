#include <iostream>
using namespace std;
int main() {
  int a;
  cin>>a;
  if(a%2==1){
    cout<<"Super";
  }
  if(a%2==0 and a>2 and a<5){
    cout<<"Not Super";
  }
  if(a%2==0 and a>6 and a<20){
    cout<<"Super";
  }
  if(a%2==0 and a>20){
    cout<<"Not Super";
  }
  return 0;
} 