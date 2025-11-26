#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
    for(int i=1;i<n;i++){
    if(arr[i]>=arr[i-1]){
    }
    else return false;
}
return true;

}

int main(){
int arr[5]={1,2,3,4,5};

if(sorted(arr,5)){
    cout<<"SORTED";
}
else cout<<" NOT SORTED";

}