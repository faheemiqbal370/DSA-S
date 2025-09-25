#include<bits/stdc++.h>
using namespace std;

void arrays(int n,int arr[],int l,int r){
    if(l>=r) return ;
    else{
        swap(arr[l],arr[r]);
        arrays(n,arr,l+1,r-1);
    }
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arrays(n,arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
   
}
