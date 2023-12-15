#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

void reverseArray(vector<int> &nums)
{   
       
    sort(nums.begin(),nums.end());
    vector<int> revarr;
    int j = nums.size() - 1;
    for(int i = j; i >= 0; i--)
    {
        revarr.push_back(nums[i]);
    }
    for(int i = 0; i < revarr.size(); i++)
    {
        cout<<revarr[i]<<" ";
    }
    
}

int main()
{
    vector<int> nums = {1,2,3,4};

    reverseArray(nums);

    return 0;
}