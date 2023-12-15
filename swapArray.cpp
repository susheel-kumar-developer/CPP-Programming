#include<iostream>
#include<vector>
using namespace std;

vector<int> recoverArray(vector<int> &arr)
{
    // vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    int j = arr.size() - 1;
    for(int i = 0; i < arr.size(); i++)
    {   
        if(arr[j] % 2 == 0 && i < j)
        {
            int temp =  arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
        }
        j--;
        
    }
    return arr;
}

int main()
{   
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    
    // recoverArray(vec);

    vector <int> res = recoverArray(vec);

    for(int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    

    return 0;
}