#include<iostream>
#include<vector>
using namespace std;

vector<int> findPairWithGivenSum(vector<int> &arr, int TargetSum )
{
    // vector<int> vec={1,2,3,4};
    vector<int> res;

    int searchVal = 0;
    for(int i = 0; i < arr.size(); i++)
    {   
        searchVal = TargetSum - arr[i];
        for(int j = i+1; j < arr.size(); j++)
        {
            if(arr[j] == searchVal)
            {
                res.push_back(arr[i]);
                res.push_back(arr[j]);
            }    
        
        }

    }
    // for(int i = 0; i < res.size(); i++)
    // {
    //      cout<<res[i]<<'\n';
    // }
   

    return res;

}

int main()
{
    vector<int> vec={0,-1,-2,1,2,3,4};
    int target = -3;

    // findPairWithGivenSum(vec, target);
    vector<int> res = findPairWithGivenSum(vec, target);
    for(int i = 0; i < res.size(); i++)
    {
         cout<<res[i];
    }
    cout<<'\n';

   

    return 0;
}