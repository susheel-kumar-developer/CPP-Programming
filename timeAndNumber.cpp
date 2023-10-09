#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

int main()
{

    vector<int> vec={40,80,80,40,60,60};
    int sum=0;
    double ave=0;
    for(int i=0;i<vec.size();i++){
        sum+=vec[i];
        cout<<vec[i]<<endl;
    }
    ave=sum/vec.size();
    cout<<ave<<" ";
    // int a = 5;
    // if(a<10)
    //     cout<<a<<endl;
    // if(true)
    //     cout<<"printing"<<endl;
    
    // cout<<"printing outside";

    string str1="abc";
    string str2="abc";
    string str3="abc";
    bool val;
    val=str1.compare(str2);
    // cout<<val<<endl;
    // cout<<val&&str2.compare(str3);
   
    // cout<<"postive";
    return 0;
}