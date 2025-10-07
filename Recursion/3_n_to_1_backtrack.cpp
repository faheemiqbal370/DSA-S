// Dont use i-1
#include<bits/stdc++.h>
using namespace std;

int name(int i,int n){
    if(i>n) return 0;
    else{
    name(i+1,n); // calls funtion here till the upper conditon gets true {name(6,5)} and returns and prints the i on return
    cout<<i<<" "; // printing happens on return
    }
    
}
int main(){

    int n;
    cout<<"enter the nth number"<<endl;
    cin>>n;
    name(1,n);
    

}