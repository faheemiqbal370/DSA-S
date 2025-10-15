#include<bits/stdc++.h>
using namespace std;

bool palin(int n){
    int org,arm=0,digits;
    org=n;
    while(n>0){
        digits=n%10;
        arm= arm + (digits * digits * digits);
        n=n/10;
    }
    return org==arm;
}
int main(){
    int n;
    cout<<"Enter the number to check armstrong"<<endl;
    cin>>n;
    if(palin(n)) cout<<"The number "<<n <<" is ARMSTRONG";
    else cout<<"The number is NOT ARMSTRONG";

}