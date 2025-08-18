#include<bits/stdc++.h>
using namespace std;
class Node 
{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) 
    {
      this->val = val;
      this->next = NULL;
      this->prev = NULL;
    }
};
void print_forword(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;

}
void insert_at_head(Node* &head,int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->prev = head;
    
    a->next = b;
    b->next = NULL;

    insert_at_head(head,100);
    insert_at_head(head,200);
    print_forword(head);
    return 0;
}