#include<iostream>
#include<vector>
using namespace std;

void sum_range(vector<int> &arr)
{
    /*
    n=vec.size();
    sum_number=(n(2*a+(n-1)*d))/2;
    */
 

   int maxNumber=0;
		for(int i=0;i<arr.size();i++)
		{
			if(maxNumber < arr[i])
			{
				maxNumber=arr[i];
			}
		}
    cout<<maxNumber<<endl;

 ******************************************************
    // int countEven=0;
	// 	for(auto it=arr.begin();it<arr.end();it++)
	// 	{
	// 		if(*it%2==0)
	// 		{
    //             // cout<<*it<<endl;
	// 			countEven++;
    //             cout<<"Printing even value->"<<*it<<"counting even numbers->"<<countEven<<endl;
	// 		}
	// 	}

   
// return maxNumber;
   
}


int main()
{
    vector <int>v={1,2,3,4,-1,2,6};
    sum_range(v);
    return 0;
}