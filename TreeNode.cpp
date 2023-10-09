#include<iostream>
using namespace std;

class BST{
    int data;
    BST *left;
    BST *right;
};


BST *insert(BST *root, int data){

    return root;
};

int main(){

    BST *root = new BST(10);
    cout<<root->data<<" ";
    return 0;
}