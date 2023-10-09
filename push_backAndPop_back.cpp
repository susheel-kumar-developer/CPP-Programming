#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> vec{};
    vec.push_back("australia");
    vec.push_back("u.k");
    vec.insert(vec.begin()+1,"Newzeland");
    vec.push_back("NY");
    
    

    for(auto it:vec){
        cout<<it<<endl;
        // cout<<*(it.end())<<endl;
    }
    return 0;
}