#include<iostream>

using namespace std;

long factorial(int fact){
    long ans=1;
    for(int i=fact; i>0;i--){
        ans*=i;
    }
    return ans;
}

int main(){

    cout<<factorial(5)<<endl;;
    return 0;
}