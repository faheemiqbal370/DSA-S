#include<bits/stdc++.h>
using namespace std;

int divi(int n){
    vector<int>factors;
    for(int i=1; i<=n; i++){
        if(n % i==0){
         factors.push_back(i);
        }
    }
    for (auto it: factors){
        cout<<it<<" ";
    }
}
// another way to reduce Time Complexity
int divi1(int n){
    //tc is O(sqrt(n))
    vector<int>factors;
    for(int i=1;i<=sqrt(n); i++){ // insted or sqrt fun we can write i*i<=n to decrese TC. 
        if(n%i==0){
            factors.push_back(i);
            if(n/i!=i){
                factors.push_back(n/i);
            }
        }
    }
    //TC is O(no of factors * log(no of factors))
    sort(factors.begin(),factors.end()); // function to sort the insorted Vector.
    //TC is O(n);
    for (auto it: factors){
        cout<<it<<" ";
}
}
int main(){
    int n;
    cout<<"Enter the number to get its factors"<<endl;
    cin>>n;
    divi1(n);
}