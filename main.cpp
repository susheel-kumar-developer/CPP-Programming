#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

namespace first{
int val=100;
}

int val=200;

int main(){

    int val=300;
    char ch[50];
    cin.get(ch,25);
    cout<<ch<<endl;


    cout<<val<<endl;
    cout<<"Let's check";

     vector<char> vec;

     vector<int> vec1(5);
     for(int x:vec1){
        cout<<x<<endl;


     }


    return 0;
}