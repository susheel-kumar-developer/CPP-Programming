#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> str;
    str.push_back("Apple");
    str.push_back("Banana");
    str.push_back("Orange");
    str.push_back("Mango");


    for(int i = 0; i < 4; i++)
    {
        cout<<str[i]<<'\n';
    }

   
    return 0;
}