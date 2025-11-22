#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 1;
            break;
        }
    }
}
// or we can say if a number has only 2 factors it is Prime
int prime1(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)!=i){   
                // If n is divisible by i, then there are usually TWO divisors: i and n/i.But when i == n/i (which happens when i is the square root of n), we must count it only ONCE. This check prevents double-counting.
                count++;  
            }
        }
    }
    if(count>2) cout<< "Not Prime";
    else cout<<"Is Prime";
}
int main(){
    int n;
    cout<<"Enter the number to check if it is prime or not"<<endl;
    cin>>n;
    // if(prime(n)){
    //     cout<<"Not Prime"<<endl;
    // }
    // else cout<<"Is Prime";
    prime1(n);
}