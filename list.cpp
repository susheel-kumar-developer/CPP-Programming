#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
list<int>li;
li.push_back(30);
li.push_back(20);
li.push_front(10);
li.pop_front();
li.sort();
// li.clear();

// for(auto it=li.begin();it!=li.end();it++){
//     cout<<*it<<" ";
// }
auto it1 = li.begin();
advance(it1,30);
li.insert(it1,40);

// for(auto it=li.begin(); it!=li.end();it++){
//     cout<<*it<<" ";
// }

cout<<li.back()<<endl;
li.pop_back();
return 0;
}