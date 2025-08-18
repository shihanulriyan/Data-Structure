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
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    newNode = tail;

}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    
    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->next = a;

    insert_at_tail(head,tail,100);
    insert_at_tail(head,tail,200);
    print_forword(head);
    
    return 0;
}