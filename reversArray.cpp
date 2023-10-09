#include<iostream>
#include<vector>
#include<typeinfo>

using namespace std;

vector<int> fun(vector<int> intvec){
    int add_sum=0;
    while(!intvec.empty()){
        add_sum += intvec.back();
        // cout<<add_sum<<endl;
        intvec.pop_back();
    }
    // cout<<add_sum<<endl;
    return {add_sum};
}

int main(){
    vector<int> vec={1,2,3,4,5};
    vector<int> res = fun(vec);
    int intSum=0;
    while(!res.empty()){
        intSum=res[0];
        res.pop_back();
    }
    cout<<intSum<<endl;
    
   

    return 0;
}
