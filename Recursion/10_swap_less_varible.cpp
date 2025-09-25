#include<bits/stdc++.h>
using namespace std;
void arrays(int i,int arr[],int n){
    if(i>n/2) return ;
    else{
        swap(arr[i],arr[n-i-1]);
        arrays(i+1,arr,n);
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
    arrays(0,arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
}
