#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> vec;
    vec.push_back("susheel");
    vec.push_back("kumar");

    for(auto it:vec){
        cout<<it<<endl;
    }
    return 0;
}