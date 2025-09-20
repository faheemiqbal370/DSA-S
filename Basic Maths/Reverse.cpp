#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int digit=0;
    int reverse=0;
    while(n>0){
        digit=n%10;
        reverse=reverse*10 + digit;
        n=n/10;
    }
    return reverse;
}
int main(){
    int nbr;
    cout<<"enter number"<<endl;
    cin>>nbr;
    int rev=reverse(nbr);
    cout<<"Reversed is "<<rev;

}