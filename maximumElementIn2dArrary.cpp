#include<iostream>
#include<vector>

using namespace std;
// vector<vector<int>>vec = {{1, 2, 3}, {4, 5, 0,-1}, {7, 8, 9}};

int maxNumber(vector<vector<int>> &args)
{
    int maxElement = args[0][0];
    for(int i = 0; i < args.size(); i++)
    {

        for(int j = 0; j < args[i].size(); j++)
        {
            if(args[i][j] > maxElement)
            {
                maxElement = args[i][j];
            }
        }
    }
    return maxElement;
}

int main()
{
    vector<vector<int>>vec = {{1, 2, 3}, {4, 5, 0,-1}, {7, 8, 9}};
    int result = maxNumber(vec);
    cout<<result <<'\n';
    
    return 0;
}
