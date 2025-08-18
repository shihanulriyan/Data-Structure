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
void delete_at_tail(Node* &head, Node* &tail)
{
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;

}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->prev = head;
    b->prev = a;
    
    a->next = b;
    b->next = NULL;
    Node* tail = b;

    delete_at_tail(head,tail);
    print_forword(head);
    return 0;
}