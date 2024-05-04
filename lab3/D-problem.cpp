#include <iostream>  
using namespace std;  
  
int main(){  
    int a, b, c, num, sum;  
    sum=0;  
    b=0;  
    c=0;  
    cin>>a;  
    int numbers[a];  
    for(b=0; b<a; b++){  
        cin >> numbers[b];  
        if(b==0){  
            sum=numbers[0];  
  
        }  
         
        else if(numbers[b]>sum){  
            sum=numbers[b];  
            c=b;  
              
        }  
    }  
    cout<<c+1;  
     
    return 0;  
}