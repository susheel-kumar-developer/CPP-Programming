#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> vec={{1,2,3,4},{5,6,7,8}};
    int sum=0, count=0;
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            sum += vec[i][j];
            count++;
        }
    }
    cout<<"sum of 2D vector->:"<<sum<<"Count of all elements;->"<<count<<"Average->"<<static_cast<float>(sum)/count<<'\n';

    return 0;
}