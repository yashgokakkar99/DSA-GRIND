#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

void Swap(int *r1,int *r2)
{
    int temp;
    temp = *r1;
    *r1 = *r2;
    *r2 = temp;
}

void Reverse(struct Array *arr)
{
    int i,j;
    for(i=0, j=arr->length-1;i<=j;i++,j--)
    {
        Swap(&arr->A[i], &arr->A[j]);
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
    struct Array arr = {{0,2,4,6,8,10,12,14,16,20},10,10};

    Reverse(&arr);

    Display(arr);
}