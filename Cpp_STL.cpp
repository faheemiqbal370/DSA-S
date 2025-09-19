#include<bits/stdc++.h> //Contain all thr libaries
#include<iostream>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second>p2.second)return true;
    if(p1.second<p2.second)return true;

    if(p1.first>p2.first)return true;
    else return false;
};
int main(){

//1.Pair
pair<int,int> p ={1,2}; //P stores 1 and 2 of int DT
// cout<<p.first;

//2.Vectors
vector <int>v;
v.push_back(1);
v.emplace_back(2);

// (i) Vector with Pair
vector<pair<int,int>>vec;
vec.push_back({1,2});
cout<<vec[0].first<< " "<<vec[0].second<<"\n" ;

vector<int>v1(5,200);

// (ii) Accesing elements of Vector Using ITERATORS
vector<int>::iterator it =v1.begin();
it++;
cout<<*(it)<<"\n";
// Other are v.end() and v.rend() and v.rbegin()

// (iii) Loop in a Vector
for(auto it= v1.begin(); it !=v1.end();it++){
    cout<<*(it)<<" ";
}
cout<<" \n";
// or use this
for(auto it:v1){
    cout<<it<<" ";
}
cout<<"\n";
// (iv) Deletion in Vector
v1.erase(v1.begin()+1);
v1.erase(v1.begin()+1,v1.begin()+3);//start included end isn't

// (v) Inserting into Vector
vector <int> v2(2,100);
v2.insert(v2.begin(),300);
v2.insert(v2.begin()+1,2,10);

// (vi) Copying the Vector
vector<int>v3;
v3.insert(v3.begin(), v2.begin(), v2.end());
for(auto it :v3){
    cout<<it<<" ";
}
cout<<"\n";

// 3. List
list<int> ls;
ls.push_back(2);
ls.emplace_back(3);

ls.push_front(44);
ls.emplace_front(33);

for(auto it=ls.begin(); it!= ls.end();it++){
cout<<*(it)<<" ";
}
cout<<"\n";

//4.Deque
deque<int> dq;
//Rest all other fuctions are the same.

//5.Stack
stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);

cout<<st.top()<<" ";

st.pop();
cout<<st.top()<<" ";

cout<<st.empty()<<" ";
cout<<"\n";

//6.Queue
queue<int>qu;
qu.push(1);
qu.push(2);
qu.push(3);
qu.push(4);

qu.back()+=5; //Add 5 to last one
cout<<qu.back()<<"\n";

qu.front()+=7;
cout<<qu.front()<<"\n";

//7.Priority Queue
priority_queue<int>pq;
pq.push(1);
pq.push(2);
pq.push(3);
pq.push(4);

cout<<pq.top()<<" "<<"\n";

priority_queue <int, vector<int>, greater<int>> pq1; //Min Heap or Minimum priority queue
pq1.push(3);
pq1.push(9);
pq1.push(8);
pq1.push(4);

cout<<pq1.top()<<"\n";

//8.Set
set<int>set;
set.insert(1);
set.insert(1);
set.insert(34);
set.insert(6);
set.insert(15);

auto it1=set.find(7);
cout<<*(it)<<"\n"; //200 garbage

cout<<set.count(1)<<"\n"; // 1

auto it2=set.find(1);
auto it3=set.find(15);

set.erase(it2,it3);
auto it4=set.find(6);
cout<<*(it4)<<"\n"; // garbage 

//9.Multiset
multiset<int>ms;
ms.insert(1);
ms.insert(1);
ms.insert(1);
ms.insert(1);

cout<<ms.count(1)<<"\n";

ms.erase(ms.find(1)); //erases address of first 1 ie deletes first 1

//10.Map
map<int,int>mpp;

mpp[1]=2;
mpp.insert({2,4});
mpp.emplace(3,5);

for(auto it5:mpp){
    cout<<it5.first<<" "<<it5.second<<'\n';
}

// Algorithms

//Sort

pair<int,int>a[3]={{1,2},{2,1},{4,1}};
sort (a,a+3,comp);

for(auto &p : a){
    cout<<p.first<<" "<<p.second<<"\n";
}




}