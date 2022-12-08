#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

void Insert(struct Array *arr, int x)
{
    int i = arr->length-1;
    while(x<arr->A[i])
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}

void Display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}

int main()
{
    struct Array arr = {{2,4,6,8,10},5,10};
    Display(arr);
    cout<<endl;
    Insert(&arr, 3);
    cout<<endl;
    Display(arr);
}