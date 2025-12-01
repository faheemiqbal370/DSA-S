#include<bits/stdc++.h>
using namespace std;
void reversee(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void lr(int arr[],int n,int d){
    reversee(arr,0,d-1);
    reversee(arr,d,n-1);
    reversee(arr,0,n-1);
}
int main(){
int arr[7]={33,543,67,112,98,54,642};
int d;
cout<<"upto how many numbers you want to rotate"<<endl;
cin>>d;
int n =7;
lr(arr,n,d);
for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }

}




