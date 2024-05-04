#include <iostream>
#include <string>

using namespace std;
int main(){
    string sum;
    int sum1=0;
    int sum2=0;
    cin>>sum;
    for(int i=0; i<sum.length(); i++){
        if(i%2==1){
            sum1+=int(sum[i]);
        }
        else if(i%2==0){
            sum2+=int(sum[i]);
        }
    }
    if(sum1==sum2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}