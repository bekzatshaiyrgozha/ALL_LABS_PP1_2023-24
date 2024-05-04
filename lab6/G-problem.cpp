#include <iostream> 
#include <string> 
 
using namespace std; 
string abc(string s){ 
    string s1; 
    s1=""; 
    for(int i=0; i<s.size(); i++){ 
        if(s[i]=='A' ||  s[i]=='a'){ 
            continue; 
        } 
        if(s[i]=='E' ||  s[i]=='e'){ 
            continue; 
        } 
        if(s[i]=='O' ||  s[i]=='o'){ 
            continue; 
        } 
        if(s[i]=='I' ||  s[i]=='i'){ 
            continue; 
        } 
        if(s[i]=='U' ||  s[i]=='u'){ 
            continue; 
        } 
        else{ 
            s1+=s[i]; 
        } 
         
    } 
    return s1; 
} 
 
int main(){ 
    int a; 
    string s; 
    getline(cin,s); 
    cout<<abc(s); 
 
}