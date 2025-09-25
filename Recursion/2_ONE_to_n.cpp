#include<bits/stdc++.h>
using namespace std;

int name(int i,int n){
    if(i>n) return 0;
    else{
    cout<<i<<" ";
    name(i+1,n);
    }
    
}
int main(){

    int n;
    cout<<"enter the nth number"<<endl;
    cin>>n;
    name(1,n);
    

}