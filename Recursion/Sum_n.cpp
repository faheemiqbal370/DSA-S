#include<bits/stdc++.h>
using namespace std;

void summ(int n,int sum){
    if(n<1){
        cout<<sum;
        return;
    }
    summ(n-1,sum+n);
    }
int main(){
    int n;
    cout<<"Enter nth number"<< endl;
    cin>>n;
    summ(n,0);
}