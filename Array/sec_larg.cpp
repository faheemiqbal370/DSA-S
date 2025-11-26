#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[5]={33,543,67,112,98};
int largest=arr[0];
int sl=INT_MIN;
for(int i=1;i<5;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}

for(int i=0;i<5;i++){
    if(arr[i]>sl && arr[i]!=largest){
        sl=arr[i];
    }
}
cout<<"Second largest element is "<<sl;
}