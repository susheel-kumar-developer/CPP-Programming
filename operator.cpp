#include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int>fourOperations(int a, int b){
    vector <int> vec{a+b,a-b,a*b,a/b};
    return vec;
}

int main(){

    vector<int> vec={1,2,3,4};
    vector<char> vec1={'a','b'};
    vector<double>vec2={1.2,3.4};
    cout<<vec[0]<<" ";
//     for(int i=0;i<vec.size();i++){
//         cout<<vec[0]<<" ";
//    }



    // for(auto v:fourOperations(15,3))
    // cout<<v<<" ";

//  int num[] = {1,2,3};
    
//     vector<int> vec;
    
//     for(auto it=begin(num);it<end(num);it++)
//     {
//         cout<<*it;
//     }
cout<<endl;
return 0;
}