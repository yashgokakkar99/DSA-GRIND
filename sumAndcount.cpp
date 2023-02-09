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
    struct Node *t, *last;
    first = new Node;
    cout << "Enter data for head : ";
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

int count(struct Node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

int sum(struct Node *q)
{
    int sum = 0;
    while (q != NULL)
    {
        sum += q->data;
        q = q->next;
    }
    return sum;
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " -> ";
        p = p->next;
    }
}

int Max(struct Node *p)
{
    int max = INT16_MIN;
    while (p != NULL)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int Min(struct Node *p)
{
    int min = INT16_MAX;
    while (p != NULL)
    {
        if (p->data < min)
        {
            min = p->data;
        }
        p = p->next;
    }
    return min;
}

Node* Search(struct Node *p, int key)
{
    while(p!=NULL)
    {
        if(key==p->data){
            return(p);
        }
        p=p->next;
    }
    return NULL;
}

int main()
{
    bool contd = true;
    int choice;
    while (contd)
    {
        cout << "Menu Driven Linked list : " << endl;
        cout << "1. Create Linked List" << endl;
        cout << "2. Display Linked List" << endl;
        cout << "3. Count Nodes in Linked List" << endl;
        cout << "4. Sum of Nodes in Linked List" << endl;
        cout << "5. Max element " << endl;
        cout << "6. Min element " << endl;
        cout<<"7. Search node "<<endl;
        cout << "8. Exit" << endl;
        cout << endl;
        cout << "Enter choice : ";
        cin >> choice;
        if (choice == 1)
        {
            int noofnodes;
            cout << "Enter n : ";
            cin >> noofnodes;
            Create(noofnodes);
        }
        else if (choice == 2)
        {
            Display(first);
            cout<<endl;
        }
        else if (choice == 3)
        {
            cout << "Count : " << count(first);
            cout<<endl;
        }
        else if (choice == 4)
        {
            cout << "Sum : " << sum(first);
            cout<<endl;
        }
        else if (choice == 5)
        {
            cout << "Max element : " << Max(first);
            cout<<endl;
        }
        else if (choice == 6)
        {
            cout << "Min element : " << Min(first);
            cout<<endl;
        }
        else if (choice == 7)
        {
            int ele;
            cout<<"Enter node data to search : ";
            cin>>ele;
            cout << "Search node : " << Search(first, ele);
            cout<<endl;
        }
        else if (choice == 8)
        {
            contd = false;
        }
        else
        {
            cout << "Wrong input !!";
        }
    }
}
