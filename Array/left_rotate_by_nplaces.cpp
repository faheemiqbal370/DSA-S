#include<bits/stdc++.h>
using namespace std;
void lr(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){  
        arr[i]=temp[i-(n-d)];
    }
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




