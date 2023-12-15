#include<iostream>

using namespace std;

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++)
    {
        int level = i;
        for(int j = 1; j <= i; j++)
        {
            cout<<level;
        }
        cout<<'\n';

    }
    return 0;
}