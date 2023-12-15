#include<iostream>
#include<vector>

using namespace std;

vector<int> maxElement(vector<vector<int>> &arr)
{
    // arr = {{1, 8, 0}, {2, 4, -1}, {3, 4, -8}}
   vector<int> maxElementSubArray;

		for(int i = 0; i < arr.size(); i++)
		{
			// max element is taking from each subarray for compare itself array  
			int maxNumber = arr[i][0];
			for(int j = 0; j < arr[i].size(); j++)
			{
				if(arr[i][j] > maxNumber)
				{
					maxNumber = arr[i][j];
				}
			}
			maxElementSubArray.push_back(maxNumber);
		}
	return maxElementSubArray;
    // cout<<maxArr.size()<<'\n';
    // for(int i=0;i<maxElementSubArray.size();i++)
    // {
    //     cout<<maxElementSubArray[i]<<'\n';
    // }

   
// return maxArr;
}

int main()
{
    vector<vector<int>> vec={{1, 8, 0}, {2, 4, -1}, {3, 4, -8}};
    // maxElement(vec);
    vector<int> result = maxElement(vec);
    for(int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<'\n';
    }
    return 0;
}