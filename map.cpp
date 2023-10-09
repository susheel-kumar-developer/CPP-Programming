#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string>m;
    m[1]="abc";
    m[2]="bcd";
    m[2]="bdgc";
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<"   "<<it->second<<endl;
    }
    return 0;
}