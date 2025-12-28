#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ln;
    cout<<"Enter size of largest element in array"<<endl;
    cin>>ln;
    ln++;
    
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[ln]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }

    int t;
    cout<<"How many numbers you want to find"<<endl;
    cin>>t;

    while(t--){
        int number;
        cout<<"Enter the number "<<endl<<endl;
        cin>>number;
        cout<<endl;
        cout<<"The number appears "<<hash[number]<<" times"<<endl<<endl;
    }
}