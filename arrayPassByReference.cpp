#include<iostream>

using namespace std;

void arrayFun(int arr[])
{
    arr[0] = 10;
    // for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
}

int main()
{   
    int arr[] = {1,2,3,4,5};
    arrayFun(arr);
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<'\n';
    }
    
    return 0;
}