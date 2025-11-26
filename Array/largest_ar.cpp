#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[5]={33,543,67,112,98};
int largest=arr[0];
for(int i=1;i<5;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}
cout<<"largest element is "<<largest;
}