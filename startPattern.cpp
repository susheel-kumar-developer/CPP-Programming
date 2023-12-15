#include<iostream>
using namespace std;


int main()
{
    int n,num=2;
    cout<<"Please enthe number for printing pattern->";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j*num<<" ";
        }
        cout<<'\n';
        num++;
    }
    return 0;
}