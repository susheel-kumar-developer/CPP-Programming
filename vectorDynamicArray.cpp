#include<iostream>
#include<vector>
using namespace std;


vector<int>sumRange(vector<int> &a){
    int sum=0;
    for(int i=a[0];i<a[1];i++){
        sum+=i;
    }
    return sum;

}

int main(){
    
    // int vecArray={1,5};
    vector<int>vecArray{1,5};
    cout<<sumRange(vecArray);
    
return 0;
}