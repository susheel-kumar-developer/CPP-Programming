#include<iostream>
using namespace std;

int main(){
    /* Taking user input 
    and first loop will print space 
    after that second loop will print star then 
    */
    
    int N;
    cin>>N;
    for(int i=1;i<N;i++){
        for(int j=1;j<=N;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}