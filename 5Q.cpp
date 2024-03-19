#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    int x=0;
    for(int i=0;i<s.length();i++){
        x=x*10;
        x=x+(s[i]-48);
    }
    cout<<x;
}
