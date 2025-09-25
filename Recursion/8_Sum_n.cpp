//parameterised
#include<bits/stdc++.h>
using namespace std;

void sum(int n,int tot){
    if(n<1){
        cout<<tot;
        return;
    }
    sum(n-1,tot+n);
    }
int main(){
    int n;
    cout<<"Enter nth number"<< endl;
    cin>>n;
    sum(n,0);
}