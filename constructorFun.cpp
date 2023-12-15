#include<iostream>

using namespace std;

class Student
{
    public:
    // void func();
    void func()
    {
        // cout<<2+3<<'\n';
    }
    Student()
    {
        func();
        cout<<"Constructor is calling first";
        
    }
};

int main()
{
    Student s1;

    return 0;
}