#include<iostream>
#include<vector>
using namespace std;

vector<int> modifyArrary(vector<int> &arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] % 2 == 0)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }
    return arr;
}

int main()
{
    vector<int> vec={1,2,3,4,5,6,-2};
    vector<int> result = modifyArrary(vec);
    for(int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<'\n';
    }
    
    return 0;
}