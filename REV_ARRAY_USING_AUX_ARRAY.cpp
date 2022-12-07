#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

void Reverse(struct Array *arr1)
{
    int i,j;
    int *B;
    B = new int[10];
    for(i=arr1->length-1, j=0;i>=0;i--,j++)
    {
        B[j] = arr1->A[i];
    }
    for(i=0;i<arr1->length;i++)
    {
        arr1->A[i] = B[i];
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