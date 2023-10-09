#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(-340);

    for(auto it=vec.begin(); it!=vec.end();it++){
        cout<<*it<<" ";
    }
    cout<<"Minimum element:->"<<*min_element(vec.begin(),vec.end());
    cout<<endl;
    return 0;
}