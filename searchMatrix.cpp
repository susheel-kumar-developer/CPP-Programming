#include<iostream>
#include<vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &arr, int target)
{
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size(); j++)
        {
            if(arr[i][j] == target)
            {
                return true;
            }
            
        }
    }
    return false;

}

int main(){
    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};

    int target = 5;
    cout<<searchMatrix(vec, target)<<'\n';

    return 0;
}