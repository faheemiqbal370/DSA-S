#include<bits/stdc++.h>
using namespace std;

void bsort(int arr[],int n){

    for(int i=n-1;i>=1;i--){
        
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){

            int temp = arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            }
        }
    }
}
int main(){
     int n;
    cout<<"Enter size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bsort(arr,n);
    cout<<"Sorted Array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}