#include<bits/stdc++.h>
using namespace std;

int count(int &n){
    int cnt=0;
    while(n>0){
        int lastdigit=n%10;
        cnt=cnt+1;
        n=n/10;
    }
    return cnt;
}
int count1(int &n){
    int cnt1=(int)(log10(n)+1); // one shot Solution
    return cnt1;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int ccnt=count1(n);
    cout<<"Total digits = "<<ccnt;


}