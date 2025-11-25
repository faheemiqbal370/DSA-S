#include<bits/stdc++.h>
using namespace std;
int partinxx(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<= pivot && i<= high -1){
            i++;
        }
         while(arr[j]> pivot && j>= low +1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void qsort( int arr[],int low,int high){
    if(low<high){
        int partinx= partinxx(arr,low,high);
        qsort(arr,low,partinx-1);
        qsort(arr,partinx+1,high);
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
    qsort(arr,0,n-1);
    cout<<"Sorted Array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
