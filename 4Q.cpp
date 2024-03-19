#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s){
  
}
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    int n=s.length();
    int i=n/2;
    int j=n-1;
    while(i<j){
        swap(s[i],s[j]);
        j--;
        i++;
    }
    cout<<s;
}  