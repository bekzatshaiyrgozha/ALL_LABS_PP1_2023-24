#include <cmath>
#include <iostream> 
using namespace std; 
int main(){ 
   int elem,b=0;
   cin>>elem;
   int array[elem];
   for(int i=0; i<elem;i++){
    cin>>array[i];
    if(array[i]>0){
        b++;
        
    }
   }
   cout<<b;
}