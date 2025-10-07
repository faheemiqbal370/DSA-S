#include<bits/stdc++.h>
using namespace std;

int name(int i,int n){
    if(i>n) return 0;//BaseCase
    else{
    cout<<i<<" faheem"<<endl;
    name(i+1,n);
    }   
}
int main(){

    int n;
    cout<<"enter how manny times you want to print"<<endl;
    cin>>n;
    name(1,n);
    

}