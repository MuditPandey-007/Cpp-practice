#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;       // class_pointer.
};

void display(node *p) 
{
    while(p != NULL) {
        cout << p->data;
        if(p->next != NULL) 
            cout << "->";
        p = p->next;
    }
}

int main() {
    class node *head = NULL;        // class_pointer
    class node *second = 0;
    class node *third = NULL;
    class node obj1, obj2;
    
    
    head = new node();
    // head = &obj1;
    second = new node();
    third = new node();

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;

    display(head);      // class_pointer
}