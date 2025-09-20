#include<bits/stdc++.h>
using namespace std;

bool palin(int n){
    int org,rev=0,digits;
    org=n;
    while(n>0){
        digits=n%10;
        rev=rev*10+digits;
        n=n/10;
    }
    return org==rev;
}

int main(){
    int n;
    cout<<"Enter the number to be reversed"<<endl;
    cin>>n;
    if(palin(n)) cout<<"The number "<<n <<" is Palindrome";
    else cout<<"The number is NOT PALINDROME";

}