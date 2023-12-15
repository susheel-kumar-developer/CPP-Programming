#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 0,-1}, {7, 8, 9}};

    int minElement = arr[0][0];
		for(int i = 0; i < arr.size(); i++)
		{
			for(int j = 0; j < arr[i].size(); j++)
			{
				if(arr[i][j] < minElement)
				{
					minElement = arr[i][j]; 
				}
			}
		}

   cout<<minElement<<'\n';

    return 0;
}
