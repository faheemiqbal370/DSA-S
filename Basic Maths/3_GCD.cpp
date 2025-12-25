#include<bits/stdc++.h>
using namespace std;

int hcf(int n1, int n2){
    int max=0;
    for(int i =1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0 && i>max){
            max=i;     
        }
    }
    cout<<"The HCF is "<<max;
}

int main(){
    int n1,n2;
    cout<<"Enter two numbers to find their HCF"<<endl;
    cin>>n1>>n2;
    hcf(n1,n2);
}