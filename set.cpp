#include<iostream>
#include<set>

using namespace std;

int main(){
    set <int> s;
    s.insert(20);
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(80);
    s.insert(90);
    s.insert(100);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
        }
    cout<<endl;
    auto it = s.find(70);
    if(it != s.end()){
        s.erase(70);
    }
    else
    cout<<"70 is not present"<<endl;

    cout<<"Minimum element:->"<<*s.begin()<<endl;
    cout<<"Maximum element:->"<<*s.end()<<endl;
      cout<<"Maximum element:->"<<*s.rbegin()<<endl;

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
        }

    return 0;
}