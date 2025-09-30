#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Size"<<endl;
    cin>>n;
    map<int,int>mpp;  // use unorderd map to decrese time complexity,unorderd map should be the first prefrencce
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    int t;
    cout<<"how many numbers you wann find"<<endl;
    cin>>t;

    while(t--){
        int nbr;
        cout<<"Enter Number"<<endl;
        cin>>nbr;

        cout<<"appers "<<mpp[nbr]<<" times"<<endl;
    }
}