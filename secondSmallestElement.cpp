#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

void secondSmallestElement(vector<int> &nums)
{
    set<int> myset;
    vector<int> vec;
    for(int i = 0; i < nums.size(); i++)
    {
        myset.insert(nums[i]);
    }
    sort(myset.begin(),myset.end());
    vec.push_back(myset);
    for(int i=0;i<myset.size();i++)
    {
        vec.push_back();
    }
    
}

int main()
{
    vector<int>nums = {1,2,1,4,6};
    secondSmallestElement(nums);

    return 0;
}