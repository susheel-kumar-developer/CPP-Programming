#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string>my_queue;
    my_queue.push("s");
    my_queue.push("u");
    my_queue.push("s");

    while(!my_queue.empty())
    {
        cout<<my_queue.front();
        my_queue.pop();

    }
    return 0;
}