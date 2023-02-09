// #include<iostream>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *next;
// }*first = NULL;

// void Create(int n){
//     int i;
//     struct Node *t, *last;
//     first = new Node;
//     cout<<"Enter data for head : ";
//     cin>>first->data;
//     first->next = NULL;
//     last = first;
//     for(i=2;i<=n;i++){
//         t = new Node;
//         cout<<"Enter data for node "<<i<<" : ";
//         cin>>t->data;
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// void Display(struct Node *p)
// {
//     while(p!=NULL)
//     {
//         cout<<p->data<<" -> ";
//         p = p->next;
//     }
// }

// int main()
// {
//     int noofnodes;
//     cout<<"Enter n : ";
//     cin>>noofnodes;
//     Create(noofnodes);
//     Display(first);
// }

#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*first = NULL;

void CreateLL(int n){
    int i;
    struct Node *t, *last;
    first = new Node;
    cout<<"Enter data for head node(1) : ";
    cin>>first->data;
    first->next = NULL;
    last = first;
    for(i=2;i<=n;i++){
        t = new Node;
        cout<<"Enter data for node "<<i<<" : ";
        cin>>t->data;
        t->next = NULL;
        last->next  = t;
        last = t;
    }
}

// void DisplayLL(struct Node *p){
//     while(p!=NULL)
//     {
//         cout<<p->data<<"->";
//         p = p->next;
//     }
// }

// void DisplayLL(struct Node *p){      //Recursive Display function.
//     if(p!=NULL)
//     {
//         cout<<p->data<<"->";
//         DisplayLL(p->next);
//     }
// }

void DisplayLL(struct Node *p){         //Prints the linked list in reverse order.
    if(p!=NULL)
    {
        DisplayLL(p->next);
        cout<<p->data<<"->";
    }
}

int main()
{
    int noOfNodes;
    cout<<"Enter n : ";
    cin>>noOfNodes;
    CreateLL(noOfNodes);
    DisplayLL(first);
}