#include<iostream>
using namespace std;

int main(){

    int N;
    // cout<<"Printing without inilization:"<<N<<endl;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j==1 || i==5 || i==j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}