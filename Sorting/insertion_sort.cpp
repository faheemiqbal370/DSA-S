#include<bits/stdc++.h>
using namespace std;

void isort(int arr[],int n){

    for(int i=0;i<=n-1;i++){
          int j =i;
          while(j>0 && arr[j-1]>arr[j]){
             int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
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
    isort(arr,n);
    cout<<"Sorted Array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}