#include<bits/stdc++.h>
using namespace std;

bool pal(int i,string &s){
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size() -i-1]) return false;
    else pal(i+1,s);  
}
int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin, s);
    if(pal(0,s)){
        cout<<"Palindrome"<<endl;
    }
    else cout<<"NOT Palindrome"<<endl;

}