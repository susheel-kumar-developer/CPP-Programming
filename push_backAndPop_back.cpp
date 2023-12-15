#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,1,-3,-2,5};
    double average;
	double sum=0.0;
	for(int i=0;i<arr.size();i++)
	{
		sum += arr[i];
	}
	average = sum/arr.size();

    cout<<"Average:->"<<average<<endl;
    // ,6,4,-34,8,4,9,0
    // int min = vec[0];
    // vec.push_back("australia");
    // vec.push_back("u.k");
    // vec.insert(vec.begin()+1,"Newzeland");
    // vec.push_back("NY");
    
    // for(int i=0; i<vec.size(); i++){
    //     cout<<"i:->"<<i<<endl;
    //     if(vec[i] <= min)
    //     {
    //         min = vec[i];
    //     }
    // }
    // cout<<"Minimum element in vector:->"<<min<<endl;
    // for(auto it:vec){
    //     cout<<it<<endl;
    //     //cout<<*(it.end())<<endl;
    // }
    return 0;
}