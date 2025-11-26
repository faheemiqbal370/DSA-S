#include<bits/stdc++.h> 
using namespace std;

int main(){
   int arr[9]={1,1,2,4,3,2,3,4,3};
    set<int> st;
    for(int i=0;i<9;i++){
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }
    for(int i=0;i<index;i++){
        cout<<" "<<arr[i];
    }


return 0;
}
