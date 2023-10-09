#include<iostream>
using namespace std;

int main(){
    int n;
    // cin>>n;
    for(int i=1;i<4;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=4;i>=0;i--){
        for(int j=i;j>=0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
