#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<char>my_stack;
    my_stack.push('s');
    my_stack.push('u');
    my_stack.push('h');
    while(!my_stack.empty()){
        cout<<my_stack.top();
        my_stack.pop();
    }
    cout<<endl<<"my_stackack size is:->"<<my_stack.size()<<" ";
    return 0;
}

// #include <bits/stdc++.h>
// int main()
// {
//     return EXIT_FAILURE;
// }