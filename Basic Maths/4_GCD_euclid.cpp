#include<bits/stdc++.h>
using namespace std;

int hcf(int n1,int n2){
    while(n1>0 && n2>>0){
        if(n1>n2) n1=n1%n2;
        else n2=n2%n1;
    }
    if(n1==0) cout<<"HCF is "<<n2;
    else cout<<"HCF is "<<n1;
}
//TC will be O(log fi min(n1,n2))
int main(){
    int n1,n2;
    cout<<"Enter two numbers to find their HCF"<<endl;
    cin>>n1>>n2;
    hcf(n1,n2);
}