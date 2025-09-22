#include<bits/stdc++.h>
using namespace std;

int name(int i,int n){
    if(i>=n) return 0;
    else{
    cout<<n-i<<" ";
    name(i+1,n);
    }
}
// Or
int name1(int i,int n){
    if(i<1) return 0;
    else{
    cout<<i<<" ";
    name1(i-1,n);
    }
}
int main(){

    int n;
    cout<<"enter the nth number"<<endl;
    cin>>n;
    // name(0,n);

    name1(n,n);
    

}