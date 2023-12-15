#include<iostream>

using namespace std;

class ListNode
{
    public:
        int data;
        ListNode* next;

        ListNode(int value)
        {
            this->data = value;
            this->next = nullptr;
        }
};

class LinkList
{
    public:
        ListNode* head ;
        

        LinkList()
        {
            this->head = nullptr;
        }
       
        void insert(int value)
        {
            
            ListNode* new_node = new ListNode(value);
            
            
           if(head == nullptr)
            {
               head = new_node;   
            }
            else
            {   
                
                ListNode* current = head;
                while(current->next != nullptr)
                {
                    current = current->next;
                }
                current->next = new_node;
                
            }
            
        }

        void deleteNode(ListNode* node)
        {
            ListNode* temp;
            if(node == nullptr || node->next == nullptr)
            {
                // cout<<"We cann't delete this node"<<'\n';
            }
            temp = node->next;
            node->next = node->next->next;
            delete temp;
     
      
        }

        void middleNode()
        {   ListNode* slowPtr = head, *fastPtr = head;

            while(fastPtr != nullptr && fastPtr->next == nullptr)
            {
                slowPtr = slowPtr->next;
                fastPtr = fastPtr->next->next; 
            }
            cout<<slowPtr->data<<'\n';
        }

        void display()
        {   
            ListNode* current = head;
            while(current != nullptr)
            {
                cout<<current->data<<" ";
                current = current->next;
            }
        }

};

int main()
{   
    LinkList NodeObj;
    NodeObj.insert(1);
    NodeObj.insert(2);
    NodeObj.insert(3);
    NodeObj.insert(4);
    NodeObj.insert(5);
    NodeObj.insert(6);
    NodeObj.insert(7);
    NodeObj.insert(8);
    
    // ListNode* NodeToDeleted = NodeObj.head->next;
    
    // NodeObj.deleteNode(NodeToDeleted);

    NodeObj.middleNode();

    NodeObj.display();

    return 0;
}