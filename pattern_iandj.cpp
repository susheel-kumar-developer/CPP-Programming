#include<iostream>
using namespace std;

int main(){
    int N=4;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++)
        {
            if(i==1 || i==N || j==1 || j==N)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<endl;
        
    }
    return 0;
}