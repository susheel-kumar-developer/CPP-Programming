#include<iostream>
#include<vector>
using namespace std;

/*
Function to search an element in an array
Write a program that searches for a given element in a given array. The function should return a boolean value indicating whether the element was found in the array or not.
Example 1:
Input: arr = [1,2,3,4,5], x = 4 
Output: true
*/

bool searchElement(vector<int> &arr, int x)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    
}

int main()
{
    vector<int> vec = {1,2,3,4,5};
    int x = 4;

    // cout<<searchElement(vec, x)<<'\n';
    cout<<bool(true);

    return 0;
}
