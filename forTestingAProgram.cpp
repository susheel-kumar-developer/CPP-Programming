#include<iostream>
#include<vector>
#include<set>

using namespace std;


void removeDublicates(vector<int> &vec)
{
    set<int> myset;
    vector<int> new_vec;

    for(auto i:vec)
    {
        myset.insert(i);
    }
    for(auto j:myset)
    {
        new_vec.push_back(j);
    }
     for(auto k:new_vec)
    {
        cout<<k<<" ";
    }
}

int main()
{
    vector<int> vec = {1,-100,2,2,-100,3,3,4,4,6,6,7,8,8,8,9};

    removeDublicates(vec);  
    

    // for(auto i:vec)
    // {
    //     cout<<i<<" ";
    // }
    return 0;
}