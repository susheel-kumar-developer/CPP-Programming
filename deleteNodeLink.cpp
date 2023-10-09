#include<iostream>
#include<typeinfo>
using namespace std;

  class LinkList
  {
    public:
        int val;
        LinkList *left, *mid, *right, *next;

    void push(int new_left, int new_data, int new_mid, int new_right){
        LinkList *data1 = new LinkList();
        data1.left=new_left;
        data1->val  = new_data;
        data1->next = nullptr;
        LinkList *temp = NULL;

        if(temp==NULL) cout<<temp;
        // cout<<typeid(data1->next).name()<<endl;
        // cout<<data1<<endl;

        // cout<<data1->val<<endl;

    }
  };

 

int main()
{
    //  LinkList data1 = new LinkList();
    LinkList node;
    
    node.push(10,11,12,13);

    return 0;
}