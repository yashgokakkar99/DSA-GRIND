#include<iostream>
using namespace std;

struct Array
{
    int A[5];
    int length;
    int size;
};

void Left_shift(struct Array *arr, int step)
{
    for(int i=step;i<arr->length;i++)
    {
        arr->A[i-step] = arr->A[i];
    }
    for(int i=arr->length-step;i<arr->length;i++)
    {
        arr->A[i] = 0;
    }
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
    struct Array arr = {{2,4,6,8,10},5,5};

    Left_shift(&arr,2);
    Display(arr);
}