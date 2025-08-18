#include<bits/stdc++.h>
using namespace std;

class Node 
{
public:
    int val;
    Node* next;

    Node(int val) 
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node*& head, int val) 
{
    Node* newnode = new Node(val);
    if (head == NULL) 
    {
        head = newnode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

void print_linked_list(Node* head) 
{
    Node* tmp = head;
    while (tmp != NULL) 
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void sort_linked_list(Node* head)
{
    for(Node* tmp = head; tmp->next != NULL; tmp = tmp->next)
    {
        for(Node* j = tmp->next; j != NULL; j = j->next)
        {
            if(tmp->val > j->val)
            {
                swap(tmp->val, j->val);
            }
        }
    }
}

int main() 
{
    Node* head = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, val); 
    }

    sort_linked_list(head);
    print_linked_list(head);
    return 0;
}
