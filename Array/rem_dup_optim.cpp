#include<bits/stdc++.h> 
using namespace std;
int removedup(int arr[],int n){
    int i=0;
    for (int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
   int arr[9]={1,1,2,2,3,3,3,4,4};
   int index=removedup(arr,9);
    for(int i=0;i<index;i++){
        cout<<" "<<arr[i];
    }

return 0;
}
