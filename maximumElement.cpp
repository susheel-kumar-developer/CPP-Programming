#include<iostream>
#include<vector>
using namespace std;

int findMax(vector<int> &arr)
{
    int maxNumber = arr[0];
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
    }
    return maxNumber;
}

int main()
{
    vector<int> vec={1,25,3,4,5,36,0,2};
    cout<<findMax(vec)<<'\n';
    return 0;
}