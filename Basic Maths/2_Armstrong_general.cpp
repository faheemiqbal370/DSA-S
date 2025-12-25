#include<bits/stdc++.h>
using namespace std;

bool palin(int n){
    int org,arm=0,digits;
    org=n;
    int cnt=(int)(log10(n)+1);
    while(n>0){
        digits=n%10;
        arm= arm + pow(digits,cnt);
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