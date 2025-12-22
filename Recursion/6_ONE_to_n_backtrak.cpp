// Dont use i+1
#include<bits/stdc++.h>
using namespace std;

int name(int i,int n){
    if(i<1) return 0;
    else{
    name(i-1,n); // calls funtion here till the upper conditon gets true and returns and prints the i
    cout<<i<<" ";
    }
    
}
int main(){

    int n;
    cout<<"enter the nth number"<<endl;
    cin>>n;
    name(n,n);

}