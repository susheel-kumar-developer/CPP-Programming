#include<iostream>
using namespace std;

class mammel{

    public:
    void mam_fun(){
        cout<<"This is mammell class"<<endl;
    }
};

class animal:public mammel{
    public:
    void name(){
    cout<<"Am in animal class"<<endl;
}

};

class dog: public animal{
    public:
    void bark(){
        cout<<"I'm barking"<<endl;
    }
};


int main(){
 mammel m;
 m.mam_fun();
 animal a;
//  a.name();
    a.mam_fun();
 dog d;
 d.bark();
 d.mam_fun();

return 0;
};