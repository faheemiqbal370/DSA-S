#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1) return n;

    int last=fib(n-1);
    int slast=fib(n-2);
    return last+slast; // This uses Recursion Tree
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
   cout<<fib(n);
}

//TC is O(2^n)--Exponential nearly