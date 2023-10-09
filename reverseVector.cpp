#include<iostream>
#include<vector>

using namespace std;

vector<int> fun(vector<int> vec)
{
vector<int> res;
for(auto it=vec.rbegin();it<vec.rend();it++)
    {
        
        res.push_back(*it);
    }
return res;
}

int main(){
    vector<int> vect{1,2,3,4};
    vector<int> result=fun(vect);
    for(int num:result){
        cout<<num<<endl;
    }

    
    return 0;
}