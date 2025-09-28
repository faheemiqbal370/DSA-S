// Only for lower case letters

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter string"<<endl;
    cin>>s;

    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;  // do to the index and add 1 if found
    }

    int t;
    cout<<"How many Characters you want to find"<<endl;
    cin>>t;

    while(t--){
        char ch;
        cout<<"Enter the character "<<endl<<endl;
        cin>>ch;
        cout<<endl;
        cout<<"The character appears "<<hash[ch-'a']<<" times"<<endl<<endl; //to get index and then fetch the value at that index
    }
}