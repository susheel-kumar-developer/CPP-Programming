#include<iostream>
using namespace std;

int main(){
    int N=4;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=N;i>=1;i--){
        for(int l=1;l<=2*i-1;l++){
            cout<<"*";
        }
        for(int m=1; m<=N-i; m++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

