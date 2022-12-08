#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

void Swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void Rearrange(struct Array *arr)
{
    int i=0;
    int j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[i]>=0)j--;
        if(i<j)Swap(&arr->A[i], &arr->A[j]);
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
    struct Array arr = {{-6,3,-8,10,5,-7,-9,12,-4,2},10,10};
    Rearrange(&arr);
    Display(arr);
    return 0;
}