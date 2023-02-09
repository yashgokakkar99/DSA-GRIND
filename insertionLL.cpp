#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void Create(int n)
{
    int i;
    Node *t, *last;
    first = new Node;
    cout << "Enter data for head node : ";
    cin >> first->data;
    first->next = NULL;
    last = first;
    for (i = 2; i <= n; i++)
    {
        t = new Node;
        cout << "Enter data for node " << i << " : ";
        cin >> t->data;
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
}

void insertF()
{
    Node *t = new Node;
    cout << "Enter data for new head node : ";
    cin >> t->data;
    t->next = first;
    first = t;
}

void insertAnywhere(int pos)
{
    Node *p;
    p = first;
    Node *t = new Node;
    cout << "Enter data for new node : ";
    cin >> t->data;
    for (int i = 0; i < pos - 1; i++)
    {
        p = p->next;
    }
    t->next = p->next;
    p->next = t;
}

void insertResultant(int pos, int x)
{
    if (pos == 0)
    {
        Node *t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else
    {
        Node *p;
        p = first;
        Node *t = new Node;
        t->data = x;
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

int main()
{
    int no;
    cout << "Enter n : ";
    cin >> no;
    Create(no);
    Display(first);
    insertF();
    Display(first);
    insertAnywhere(6);
    Display(first);
    insertResultant(2,55);
    Display(first);
    insertResultant(5,33);
    Display(first);
}