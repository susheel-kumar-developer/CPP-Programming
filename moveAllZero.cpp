#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void moverZeros(vector<int> &nums)
{
    int j = 0;
    int Zeros = count(nums.begin(),nums.end(),0);
    // cout<<Zeros<<'\n';
    int start = nums.size()- Zeros;
    // cout<<"start index->"<<start;

    for(int i = 0; i <= nums.size(); i++)
    {
        if(nums[i] != 0)
        {
            nums[j] = nums[i];
            j += 1;
        }
    }
    for(int j = start; j <= nums.size(); j++)
    {
        nums[j] = 0;
    }
    for(int i = 0; i <nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }

}

int main()
{
    vector<int> nums = {0,1,0,3,12};
    moverZeros(nums);

    return 0;
}