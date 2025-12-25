// For lower as well as upper case letters and everthing on keyboard
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter string"<<endl;
    cin>>s;

    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    
    int t;
    cout<<"How many Characters you want to find"<<endl;
    cin>>t;

    while(t--){
        char ch;
        cout<<"Enter the character "<<endl<<endl;
        cin>>ch;
        cout<<endl;
        cout<<"The character appears "<<hash[ch]<<" times"<<endl<<endl;
    }
}